using System;

class RemoteControlCar
{
    // TODO: define the constructor for the 'RemoteControlCar' class

    private int speed;
    private int batteryDrain;
    private int distanceDriven;
    private int chargeLeft;
    public RemoteControlCar(int speed, int batteryDrain){
        this.speed = speed;
        this.batteryDrain = batteryDrain;
        this.chargeLeft = 100;
        this.distanceDriven = 0;
    }

    public bool BatteryDrained()
    {
        return this.chargeLeft < this.batteryDrain;
    }

    public int DistanceDriven()
    {
        return this.distanceDriven;

    }

    public void Drive()
    {
        if (!this.BatteryDrained() && this.chargeLeft >= this.batteryDrain){
        this.distanceDriven = this.distanceDriven + this.speed;
        this.chargeLeft = this.chargeLeft - this.batteryDrain;
        }
    }

    public static RemoteControlCar Nitro()
    {
        return new RemoteControlCar(50,4);
    }
}

class RaceTrack
{
    // TODO: define the constructor for the 'RaceTrack' class
    int distance;
    RaceTrack track;
    public RaceTrack(int distance){
        this.distance = distance;
    }
    
    public bool TryFinishTrack(RemoteControlCar car)
    {

        while (!car.BatteryDrained()){
            car.Drive();
        }
        return car.DistanceDriven() >= this.distance;
    }
}
