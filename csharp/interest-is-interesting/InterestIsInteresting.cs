using System;

static class SavingsAccount
{
    public static float InterestRate(decimal balance)
    {
        var output = 0.0f;

        switch (balance){

            case < 0 : output = 3.213f;
                        break;
            case >= 0 when balance < 1000.0m : output =  0.5f;
                        break;
            case > 0 when balance >= 1000.0m && balance < 5000.0m : output = 1.621f;
                        break;
            case > 0 when balance >= 5000.0m : output = 2.475f;
                        break;
        }
        return output;
    }

    public static decimal Interest(decimal balance)
    {
        return (balance * (decimal)InterestRate(balance)/100.0m);
    }

    public static decimal AnnualBalanceUpdate(decimal balance)
    {
        var r = (decimal)InterestRate(balance)/100.0m;

        return balance*(1.0m +r*1.0m);  
    }

    public static int YearsBeforeDesiredBalance(decimal balance, decimal targetBalance)
    {
        var years = 0;
        var actualBalance = balance;
        while (actualBalance < targetBalance && balance >= 0 || actualBalance > targetBalance && balance < 0){
            actualBalance = AnnualBalanceUpdate(actualBalance);
            years++;
        }
        return years;
    }
}
