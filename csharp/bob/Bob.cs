using System;
using System.Text.RegularExpressions;
public static class Bob
{
    public static string Response(string statement)
    {
        statement = statement.Trim();


        if (statement == ""){
            return ("Fine. Be that way!");
        } 

        else if (Regex.IsMatch(statement,"[A-Z]") 
                && !Regex.IsMatch(statement, "[a-z]") 
                && statement.Substring(statement.Length - 1) != "?"){
                return ("Whoa, chill out!");
        }
        else if (Regex.IsMatch(statement,"[A-Z]") 
            && !Regex.IsMatch(statement, "[a-z]")
            && statement.Substring(statement.Length - 1) == "?"){
            return ("Calm down, I know what I'm doing!");
        }
        else if (Regex.IsMatch(statement, "[0-9]") 
                && statement.Substring(statement.Length - 1) == "?" 

                || Regex.IsMatch(statement, "[a-z]") 
                && statement.Substring(statement.Length - 1) == "?"
                
                || !Regex.IsMatch(statement, "[a-z]") 
                && statement.Substring(statement.Length - 1) == "?"
                && !Regex.IsMatch(statement, "[0-9]")) {
                return ("Sure.");
        }
        else if (statement == "Bob"){
            return ("Fine. Be that way!");
            
        }
        else {
            return ("Whatever.");
        }
    }
}