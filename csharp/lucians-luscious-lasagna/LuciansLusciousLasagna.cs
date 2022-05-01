class Lasagna
{
    int numOfLayers;
    int minsInOven;


    
    // TODO: define the 'ExpectedMinutesInOven()' method
    public int ExpectedMinutesInOven(){
        return 40;
    }
    // TODO: define the 'RemainingMinutesInOven()' method
    public int RemainingMinutesInOven(int minsInOven){
        return 40 - minsInOven ;
    }

    // TODO: define the 'PreparationTimeInMinutes()' method

    public int PreparationTimeInMinutes(int numOfLayers){
        return numOfLayers * 2;
    }
    // TODO: define the 'ElapsedTimeInMinutes()' method

    public int ElapsedTimeInMinutes(int numOfLayers, int minsInOven ){
        return this.PreparationTimeInMinutes(numOfLayers) + minsInOven;
    }
}
