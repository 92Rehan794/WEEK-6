#include<iostream>
using namespace std;

string checkStudentStatus(int, int, int, int);

main()
{
    int examHour, examMinute, studentHour, studentMinute;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    if (examHour >= 24)
    {
        cout << "Enter valid input";
        return 0;
    }
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    if (examMinute >= 60)
    {
        cout << "Enter valid input";
        return 0;
    }
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    if (studentHour >= 24)
    {
        cout << "Enter valid input";
        return 0;
    }
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    if (studentMinute >= 60)
    {
        cout << "Enter valid input";
        return 0;
    }
    string result = checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
    cout << result;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int exam_total, student_total,diff,diff_hour,diff_minute;
    string status;
    exam_total = (examHour*60)+examMinute;
    student_total = (studentHour*60)+studentMinute;
    if(((exam_total-student_total)>=0)&&((exam_total-student_total)<=30))
    {
        status = "On time";
    }

    else if(exam_total > student_total)
    { 
        diff = exam_total - student_total;
        diff_hour = diff/60;
        diff_minute = diff%60;        
        if (diff_hour > 0)
        {
            status = "Early \n" +to_string(diff_hour) + ":" + to_string(diff_minute) + " hours before the start";
        }
        else 
        {
            status = "Early \n" +to_string(diff_minute) + " minutes before the start";
        }

    }
    else if (exam_total < student_total)
    {
        diff = student_total - exam_total;
        diff_hour = diff/60;
        diff_minute = diff%60;
        if (diff_hour > 0)
        {
            status = "Late \n" +to_string(diff_hour) + ":" + to_string(diff_minute) + " hours after the start";
        }
        else
        {
            status = "Late \n" +to_string(diff_minute) + " minutes after the start";
        }

    }
    return status;     
}