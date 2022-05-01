using System;

static class LogLine
{
    public static string Message(string logLine)
    {
        int first = logLine.IndexOf(":") + 2; 
        return logLine.Substring(first).Trim();;
    }

    public static string LogLevel(string logLine)
    {
        int first = logLine.IndexOf("[") + 1;

        int last = logLine.LastIndexOf("]");

        return logLine.Substring(first, last - first).ToLower();
    }

    public static string Reformat(string logLine)
    {
        int logMsgFirst = logLine.IndexOf("[") + 1;
        int logMsgLast = logLine.LastIndexOf("]");
        string logMsg = logLine.Substring(logMsgFirst, logMsgLast - logMsgFirst).ToLower();;

        int messaggeFst = logLine.IndexOf(":") + 1;
        string message = logLine.Substring(messaggeFst).Trim();

        var output = ($"{message} ({logMsg})");

        return output;
    }
}
