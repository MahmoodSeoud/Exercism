using System;
using System.Collections.Generic;
using Microsoft.VisualStudio.TestPlatform.ObjectModel.Utilities;

public class SpaceAge
{
    private int seconds;
    private double secondsOnOneEarthYear = 31557600;

    Dictionary<string, double> planet = new Dictionary<string, double>(){
        {"Earth", 1 },
        {"Mercury",0.2408467},
        {"Venus", 0.61519726},
        {"Mars", 1.8808158},
        {"Jupiter", 11.862615},
        {"Saturn", 29.447498},
        {"Uranus",84.016846},
        {"Neptune", 164.79132}

    };

    public SpaceAge(int seconds)
    {
        this.seconds = seconds;
    }

    public double OnEarth() => On("Earth");

    public double OnMercury() => On("Mercury");

    public double OnVenus() => On("Venus");

    public double OnMars() => On("Mars");

    public double OnJupiter() => On("Jupiter");

    public double OnSaturn() => On("Saturn");

    public double OnUranus() => On("Uranus");
    public double OnNeptune() => On("Neptune");

    public double On(string plant){
        return Math.Round(seconds / (planet[plant] * secondsOnOneEarthYear), 2);
    }
}