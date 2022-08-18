//Shane Esplin_Scripting and Programming-Applications
//main.cpp file

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Shane,Esplin,esplinst@gmail.com,27,45,29,37,SOFTWARE"
    };
    
    cout << "Hello World" << endl;
    
    for(int i=0; i<5; i++)
    {
        cout << studentData[i] << endl;
    };
    return 0;
}
