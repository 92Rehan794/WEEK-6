#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyballGames(string, int, int);

main()
{
    string year_Type;
    int holidays, hometownWeekends;
    cout << "Enter year type: ";
    cin >> year_Type;
    if ( year_Type != "leap" && year_Type != "normal")
    {
        cout << "Enter valid input";
        return 0;
    }
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;

    int games = calculateVolleyballGames(year_Type,holidays,hometownWeekends);
    cout << games;    
}

int calculateVolleyballGames(string year_Type, int holidays, int hometownWeekends)
{
    float totalgames, notworkingweekends, saturdays,holidaygames;
    //notworkingweekends = 48 *(0.75);
    saturdays = (48 - hometownWeekends)*0.75;
    holidaygames = holidays *0.67;

    totalgames = saturdays + holidaygames+ hometownWeekends;
    if (year_Type == "leap")
    {
        totalgames = totalgames*1.15;
    }
    //totalgames= round(totalgames);
    return totalgames;
}
