using System;

class RemoteControlCar
{
    private int distance;
    private int battery = 100;
    public static RemoteControlCar Buy()
    {
       var car = new RemoteControlCar();
       return car;
    }

    public string DistanceDisplay()
    {
        return ( $"Driven {distance} meters");
    }

    public string BatteryDisplay()
    {
        if (battery <= 0){
            return ("Battery empty");
        }
        else{
            return ($"Battery at {battery}%");
        }
    }

    public void Drive()
    {
        if (battery > 0){
        distance = distance + 20;
        battery = battery - 1;
        }
    }
}
