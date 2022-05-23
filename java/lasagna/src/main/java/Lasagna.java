public class Lasagna {
    // TODO: define the 'expectedMinutesInOven()' method

    public int expectedMinutesInOven() {
        return 40;
    }

    // TODO: define the 'remainingMinutesInOven()' method


    public int remainingMinutesInOven(int minutesInoven) {
        return this.expectedMinutesInOven() - minutesInoven;
    }
    
    // TODO: define the 'preparationTimeInMinutes()' method
    public int preparationTimeInMinutes(int layers){
        return 2*layers;
    }

    // TODO: define the 'totalTimeInMinutes()' method
    public int totalTimeInMinutes(int layers, int minutesInoven){
        return minutesInoven + this.preparationTimeInMinutes(layers);

    }
}
