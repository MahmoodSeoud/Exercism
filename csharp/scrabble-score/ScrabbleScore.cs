using System;
using System.Collections.Generic;
using System.Linq;
public static class ScrabbleScore
{

    private static Dictionary<char, int> letters = new Dictionary<char, int>(){
        // Letters with 1 point
        {'A',1},
        {'E',1},
        {'I',1},
        {'O',1},
        {'U',1},
        {'L',1},
        {'N',1},
        {'R',1},
        {'S',1},
        {'T',1},
        // letters with 2 points 
        {'D',2},
        {'G',2},

        // letters with 3 points
        {'B',3},
        {'C',3},
        {'M',3},
        {'P',3},

        // Letters with 4 points 
        {'F',4},
        {'H',4},
        {'V',4},
        {'W',4},
        {'Y',4},

        // Letters with 5 points
        {'K',5},



        // Letters with 8 points
        {'J',8},
        {'X',8},

        // Letters with 10 points
        {'Q',10},
        {'Z',10},
        };


    public static int Score(string input)
    {
        if (input == null)
        return 0;

        return input.ToUpper()
            .ToCharArray()
            .Where((letter) => letters.ContainsKey(letter))
            .Aggregate(0, (total,letter) => total + letters[letter]);
    }
}