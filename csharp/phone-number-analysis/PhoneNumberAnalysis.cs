using System;

public static class PhoneNumber
{
    public static (bool IsNewYork, bool IsFake, string LocalNumber) Analyze(string phoneNumber)
    {
        return (IsNewYork: phoneNumber[0..3] == "212",
                IsFake: phoneNumber[4..7] == "555",
                LocalNumber: phoneNumber[8..12]); 
    }

    public static bool IsFake((bool IsNewYork, bool IsFake, string LocalNumber) phoneNumberInfo)
    {
      return phoneNumberInfo.IsFake;
    }
}
