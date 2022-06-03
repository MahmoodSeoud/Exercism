using System;

static class Appointment
{
    public static DateTime Schedule(string appointmentDateDescription)
    {
      DateTime dt = DateTime.Parse(appointmentDateDescription, System.Globalization.CultureInfo.InvariantCulture);

      return dt;
    }

    public static bool HasPassed(DateTime appointmentDate)
    {
        if (appointmentDate > DateTime.Now){
        return false;

        }
        return true;
    }

    public static bool IsAfternoonAppointment(DateTime appointmentDate)
    {
        TimeSpan twlf = new TimeSpan(12,00,00);
        TimeSpan six = new TimeSpan(18,00,00);


        TimeSpan time = appointmentDate.TimeOfDay;


        if (time >= twlf && time < six) {
            return true;
        }
        return false;

    }

    public static string Description(DateTime appointmentDate)
    {
        string description = new string("You have an appointment on " +  appointmentDate + ".");

        return description;
    }

    public static DateTime AnniversaryDate()
    {
        DateTime anniversaryDate = new DateTime(2022, 9, 15, 0, 0, 0);

        return anniversaryDate;
    }
}
