using System;

public static class Triangle
{
    public static bool IsScalene(double side1, double side2, double side3){
        if (!isTriangle(side1, side2, side3)){
            return false;
        }
        if (side1 != side2 && side2 != side3 && side1 != side3){
            return true;
        }
        return false;

    }

    public static bool IsIsosceles(double side1, double side2, double side3) 
    {
        if (!isTriangle(side1, side2, side3)){
            return false;
        }
        if (side1 == side2 || side2 == side3 || side1 == side3){
            return true;
        }
        return false;
    }

    public static bool IsEquilateral(double side1, double side2, double side3) {
        if (!isTriangle(side1, side2, side3)){
            return false;
        }
        if (side1 == side2 && side2 == side3){
            return true;
        }
        return false;

    }

// Determine whether the object even is a triangle
    public static bool isTriangle(double side1, double side2, double side3) =>  side1 > 0 && 
                                                                                side2 > 0 && 
                                                                                side2 > 0 && 
                                                                                side1 + side2 >= side3 &&
                                                                                side2 + side3 >= side1 && 
                                                                                side1 + side3 >= side2;

    }
