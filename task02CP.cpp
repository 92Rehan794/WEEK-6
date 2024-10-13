#include<iostream>
using namespace std;
float calculateAverage(float english, float maths, float chemistry, float SocialScience, float biology)
{
    float average=(english +maths + chemistry + SocialScience + biology)/5;
    return average;
}
string calculateGrade(float average)
{
    if(average>=90 && average<=100)
    {
        return "A+";
    }
    else if(average>=80 && average<90)
    {
        return "A";
    }
    else if (average>=70 && average<80)
    {
        return "B+";
    }
    else if (average>=60 && average <70)
    {
        return "B";
    }
    else if (average>=50 && average<60)
    {
        return "C";
    }
    else if (average>=40 && average <50)
    {
        return "D";
    }
    else if (average<40)
    {
        return "F";
    }

}

main()
{
    float english, maths, chemistry, SocialScience, biology;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Social Science: ";
    cin >> SocialScience;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    float average=calculateAverage( english,  maths,  chemistry,  SocialScience, biology);
    string grade=calculateGrade( average);
    cout << "Student name: " << name << endl;
    cout << "Percentage: " << average <<"%" << endl;
    cout << "Grade: " << grade ;
}