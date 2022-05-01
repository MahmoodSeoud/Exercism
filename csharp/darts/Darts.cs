using System;

public static class Darts
{
    public static int Score(double x, double y){
      var position = Math.Pow(x,2) + Math.Pow(y,2);
      if(position <= 1) return 10;
      if(position <= 25) return 5;
      if(position <= 100) return 1;
      return 0;
    }
}
