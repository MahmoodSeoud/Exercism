using System.Text;
public static class Identifier{
    private static bool IsGreekLowercase(char c) => (c >= 'α' && c <= 'ω');
    public static string Clean(string identifier)
    {
        var sb = new StringBuilder();
        var LoopHasPassedDash = false;
        

        foreach (var character in identifier)
        {
            sb.Append(character switch {
                _ when IsGreekLowercase(character) => default,
                _ when char.IsWhiteSpace(character) => '_',
                _ when char.IsControl(character) => "CTRL",
                _ when LoopHasPassedDash => char.ToUpper(character),
                _ when char.IsLetter(character) => character,
                _ => default,
            });

            LoopHasPassedDash = character.Equals('-');
        }
        return sb.ToString();
    }
}