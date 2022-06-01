using System;
using System.Collections.Generic;
using System.Linq;
class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    // a hard coded int array 
    public static int[] LastWeek()
    {
        int[] lw = new[]{0, 2, 5, 3, 7, 8, 4};

        return lw;
    }

    // Finding the last element in array 
    public int Today()
    {
        return birdsPerDay.Last();
    }

    // Hard coded version of taking the last element in array and adding 1 to it
    public void IncrementTodaysCount()
    {
      birdsPerDay[6] += 1;
    }

    // return true if any element in array contains a zero
    public bool HasDayWithoutBirds()
    {
        foreach (var item in birdsPerDay)
        {
            if (item == 0) {
                return true;
            }
        }
            return false;
    }
    // Sum up all the elements up untill 'numberOfDays'
    public int CountForFirstDays(int numberOfDays)
    {
        int sum = 0;
        
        for (int i = 0; i < numberOfDays; i++)
        {
            sum += birdsPerDay[i]; 
        }
        return sum;
    }

    // Checks the entire array for elements that are bigger or equal five
    public int BusyDays()
    {
       int busyDay = 0;
       foreach (var item in birdsPerDay)
       {
           if (item >= 5) {
               busyDay++;
           }
       }
       return busyDay;
    }
}
