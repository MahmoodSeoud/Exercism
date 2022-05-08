using System;
using System.Collections.Generic;

public static class ScrabbleScore
{
    public static int Score(string input)
    {
        // Letters with 1 point
        Dictionary<string, int> scoreCalc = new Dictionary<string, int>();
        scoreCalc.Add("A",1);
        scoreCalc.Add("E",1);
        scoreCalc.Add("I",1);
        scoreCalc.Add("O",1);
        scoreCalc.Add("U",1);
        scoreCalc.Add("L",1);
        scoreCalc.Add("N",1);
        scoreCalc.Add("R",1);
        scoreCalc.Add("R",1);
        scoreCalc.Add("S",1);
        scoreCalc.Add("T",1);
        scoreCalc.Add("a",1);
        scoreCalc.Add("e",1);
        scoreCalc.Add("i",1);
        scoreCalc.Add("o",1);
        scoreCalc.Add("u",1);
        scoreCalc.Add("l",1);
        scoreCalc.Add("n",1);
        scoreCalc.Add("r",1);
        scoreCalc.Add("r",1);
        scoreCalc.Add("s",1);
        scoreCalc.Add("t",1);


        // letters with 2 points 
        scoreCalc.Add('D',2);
        scoreCalc.Add('G',2);

        scoreCalc.Add('d',2);
        scoreCalc.Add('g',2);

        // letters with 3 points
        scoreCalc.Add('B',3);
        scoreCalc.Add('C',3);
        scoreCalc.Add('M',3);
        scoreCalc.Add('P',3);

        scoreCalc.Add('b',3);
        scoreCalc.Add('c',3);
        scoreCalc.Add('m',3);
        scoreCalc.Add('p',3);


        // Letters with 4 points 
        scoreCalc.Add('F',4);
        scoreCalc.Add('H',4);
        scoreCalc.Add('V',4);
        scoreCalc.Add('W',4);
        scoreCalc.Add('Y',4);

        scoreCalc.Add('f',4);
        scoreCalc.Add('h',4);
        scoreCalc.Add('v',4);
        scoreCalc.Add('w',4);
        scoreCalc.Add('y',4);


        // Letters with 5 points
        scoreCalc.Add('K',5);
        scoreCalc.Add('k',5);


        // Letters with 8 points
        scoreCalc.Add('J',8);
        scoreCalc.Add('X',8);

        scoreCalc.Add('j',8);
        scoreCalc.Add('x',8);

        // Letters with 10 points
        scoreCalc.Add('Q',10);
        scoreCalc.Add('Z',10);

        scoreCalc.Add('q',10);
        scoreCalc.Add('z',10);

        bool keyExist = scoreCalc.ContainsKey(intput);
    return scoreCalc();

    }
}