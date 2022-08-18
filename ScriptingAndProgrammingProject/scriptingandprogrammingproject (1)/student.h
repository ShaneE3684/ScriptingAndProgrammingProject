//Shane Esplin_Scripting and Programming-Applications
//student.h file

class Student
{
    int studentID
    string firstName
    string lastName
    string emailAddress
    int age
    int courseDaysLeft[3]
    string degreeProgram
    
    void SetStudentID(int stuID);
    void SetFirstName(string FName);
    void SetLastName(string LName);
    void SetEmailAddress(string email);
    void SetAge(int years);
    void SetCourseDays(int days[3]);
    void SetDegreeProgram(string degree);
    
    int GetStudentID();
    sting GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    int[] GetCourseDays();
    string GetDegreeProgram()
}