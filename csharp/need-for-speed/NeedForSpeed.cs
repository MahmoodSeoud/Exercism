using System;

class RemoteControlCar
{
    // TODO: define the constructor for the 'RemoteControlCar' class

    int chargeLeft;
    int speed;
    int batteryDrain;

    public RemoteControlCar(int speed, int batteryDrain){
        this.speed = speed;

        this.batteryDrain = batteryDrain;
    }

    public bool BatteryDrained()
    {
        throw new NotImplementedException("Please implement the RemoteControlCar.BatteryDrained() method");
    }

    public int DistanceDriven()
    {
        throw new NotImplementedException("Please implement the RemoteControlCar.DistanceDriven() method");
    }

    public void Drive()
    {
        throw new NotImplementedException("Please implement the RemoteControlCar.Drive() method");
    }

    public static RemoteControlCar Nitro()
    {
        throw new NotImplementedException("Please implement the (static) RemoteControlCar.Nitro() method");
    }
}

class RaceTrack
{
    // TODO: define the constructor for the 'RaceTrack' class

    int distance;

    public RaceTrack(int distance){
        this.distance = distance;
    }

    public bool TryFinishTrack(RemoteControlCar car)
    {
        throw new NotImplementedException("Please implement the RaceTrack.TryFinishTrack() method");
    }
}
