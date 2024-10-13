#include<iostream>
using namespace std;
string decide_activity(string, string);
main ()
{
    cout << "Enter the temperature (warm or cold): ";
    string temperature;
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    string humidity;
    cin >> humidity;
    string result= decide_activity(temperature, humidity);
    cout << "Recommended activity: "<< result; 
}
string decide_activity(string temperature, string humidity)
{
    string action;
    if (temperature=="warm")
    {
        if(humidity=="dry")
        action= "Play tennis";
        if(humidity=="humid")
        action="Swim";
    }
    if (temperature=="cold")
    {
        if(humidity=="dry")
        action="Play basketball";
        if(humidity=="humid")
        action="Watch TV";
    }
    return action;
}