#include<iostream>
using namespace std;
string service_type(char);
float Amount_due(string,string,int);
string period_of_day(char);
main()
{
    char service_code, time_of_day;
    int min;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> service_code;
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time_of_day;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    string service=service_type(service_code);
    cout << "Service Type: " << service << endl;
    cout << "Total Minutes Used: " << min << " minutes" << endl;
    string period=period_of_day(time_of_day);
    float amount=Amount_due(service, period, min);
    cout << "Amount Due: $" << amount;
}

string service_type(char service_code)
{   
    string type;
    if (service_code == 'P' || service_code == 'p')
    {
        type = "Premium";
    }
    if (service_code == 'R' || service_code == 'r')
    {
        type = "Regular";
    }
    return type;
}
string period_of_day(char time_of_day)
{   
    string period;
    if (time_of_day == 'D' || time_of_day == 'd')
    {
        period = "Day";
    }
    if (time_of_day == 'N' || time_of_day == 'n')
    {
        period = "Night";
    }
    return period;
}
float Amount_due(string service, string period, int min )
{
    float amount;
    if (service == "Regular")
    {
        if (min <= 50)
        {
            amount = 10;
        }
        else 
        {
            amount = 10 + (min-50)*0.20;
        }
    }
    if (service == "Premium" && period == "Day")
    {
        if (min <= 75)
        {
            amount = 25;
        }
        else 
        {
            amount = 25 + (min - 75)*0.10;
        }
    }
    if (service == "Premium" && period == "Night")
    {
        if (min <= 100)
        {
            amount = 25;
        }
        else
        {
            amount = 25 +(min - 100)*0.05;
        }
    }
    return amount;
} 