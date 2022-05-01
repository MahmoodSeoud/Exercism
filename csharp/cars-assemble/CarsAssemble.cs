using System;

static class AssemblyLine
{
    public static double SuccessRate(int speed)
    {
        if (1 <= speed && speed <= 4){
            return 1.00;
        }
        else if (5 <= speed && speed <= 8){
            return  0.90;
        }
        else if (speed == 9){
            return 0.80;
        } 
        else if (speed == 10){
            return 0.77;
        }
        else {
            return 0.00;
        }
    }
    
    public static double ProductionRatePerHour(int speed)
    {
        int carsProducedPerHour = speed *221;
        return SuccessRate(speed) * carsProducedPerHour;
    }

    public static int WorkingItemsPerMinute(int speed)
    {
        return (int)(ProductionRatePerHour(speed)/60);
    }
}
