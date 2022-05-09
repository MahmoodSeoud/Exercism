using System;
using System.Globalization;


public class SpaceAge
{
    int seconds;
    NumberFormatInfo setPrecision = new NumberFormatInfo();    

    double earthYears = 31556926.0;

    double mercuryYears = 0.2408467*31556926;
    public SpaceAge(int seconds)
    {
        this.seconds = seconds;
    }

    public double OnEarth()
    {
        return seconds/earthYears;
    }

    public double OnMercury()
    {
        setPrecision.NumberDecimalDigits = 2;   
        return seconds/mercuryYears;
    }

    public double OnVenus()
    {
        throw new NotImplementedException("You need to implement this function.");
    }

    public double OnMars()
    {
        throw new NotImplementedException("You need to implement this function.");
    }

    public double OnJupiter()
    {
        throw new NotImplementedException("You need to implement this function.");
    }

    public double OnSaturn()
    {
        throw new NotImplementedException("You need to implement this function.");
    }

    public double OnUranus()
    {
        throw new NotImplementedException("You need to implement this function.");
    }

    public double OnNeptune()
    {
        throw new NotImplementedException("You need to implement this function.");
    }
}