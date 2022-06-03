using System;

static class Badge
{
    public static string Print(int? id, string name, string? department)
    {
        //var ret = ("[{0}] - {1} - {2}", id, name, department);
        if (id == null && department == null ) {
            return name + " - OWNER";
        }
        if (id == null && department != null){
            return name + " - " + department.ToUpper();
        } 
        if (department == null && id != null){
            return "[" + id + "]" + " - " + name + " - OWNER";
        }

        return "[" + id + "]" +  " - " + name + " - " + department.ToUpper();
    }
}
