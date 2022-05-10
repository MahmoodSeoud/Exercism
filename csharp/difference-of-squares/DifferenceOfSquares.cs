using System;

public static class DifferenceOfSquares
{
    public static int CalculateSquareOfSum(int max)
    {
        double sum = 0.0;
        
        for (int i = 0; i < max; i++)
        {
            sum = sum + i;
        }
        return (int) Math.Pow(sum,2.0);
       // System.Console.WriteLine(sum);
        System.Diagnostics.Debug.WriteLine("This is CalculateDifferenceOfSquares:" + CalculateDifferenceOfSquares(max));
    }

    public static int CalculateSumOfSquares(int max)
    {
        double sum = 0.0;

        for (int i = 0; i < max; i++)
        {
            sum = sum + Math.Pow(i,2.0);
        }

        return (int) sum;
      //  System.Console.WriteLine(sum);
      System.Diagnostics.Debug.WriteLine("This is CalculateSumOfSquares:" + CalculateSumOfSquares(max));
    }

    public static int CalculateDifferenceOfSquares(int max)
    {
        System.Diagnostics.Debug.WriteLine("This is CalculateDifferenceOfSquares:" + CalculateDifferenceOfSquares(max));
        System.Diagnostics.Debug.WriteLine("This is CalculateSumOfSquares:" + CalculateSumOfSquares(max));
        return CalculateDifferenceOfSquares(max) - CalculateSumOfSquares(max);
    }
}