#include<iostream>
using namespace std;

string findZodiacSign(int day, string month);
main()
{
    int date;
    string month;

    cout << "Enter the day of birth: ";
    cin >> date;
    cout << "Enter the month of birth(e.g., January, February): ";
    cin >> month;

    string sign=findZodiacSign(date,month);
    cout << "Zodiac Sign: " << sign;

}
string findZodiacSign(int day, string month)
{
    string Zodiac_sign;
    if ((month == "March" && (day<=31 && day>=21)) || (month == "April" && (day<=19 && day>=1)))
    {
        Zodiac_sign="Aries";
    }
    if((month=="April" && (day>=20 && day<=30)) || (month=="May" && (day>=1 && day<=20)))
    {
        Zodiac_sign= "Taurus";
    }
    if ((month=="May" && (day>=21 && day<=31)) || (month=="June" && (day>=1 && day<=20)))
    {
        Zodiac_sign="Gemini";
    }
    if((month=="June" && (day>=21 && day<=30)) || (month=="July" && (day>=1 && day<=22)))
    {
        Zodiac_sign="Cancer";
    }
    if((month=="July" && (day>=23 && day<=31)) || (month=="August" && (day>=1 && day<=22)))
    {
        Zodiac_sign="Leo";
    }
    if((month=="August" && (day>=23 && day<=31)) || (month=="September" && (day>=1 && day<=22)))
    {
        Zodiac_sign="Virgo";
    }
    if((month=="September" && (day>=23 && day<=30)) || (month=="October" && (day>=1 && day<=22)))
    {
        Zodiac_sign="Libra";
    }
    if((month=="October" && (day>=23 && day<=31)) || (month=="November" && (day>=1 && day<=21)))
    {
        Zodiac_sign="Scorpio";
    }
    if((month=="Novemeber" && (day>=22 && day<=30)) || (month=="December" && (day>=1 && day<=21)))
    {
        Zodiac_sign="Sagittarius";
    }
    if ((month=="December" && (day>=22 && day<=31)) || (month=="January" && (day>=1 && day<=19)))
    {
        Zodiac_sign="Capricorn";
    }
    if((month=="January" && (day>=20 && day<=31)) || (month=="February" && (day>=1 && day<=18)))
    {
        Zodiac_sign="Aquarius";
    }
    if((month=="February" && (day>=19 && day<=29)) || (month=="March" && (day>=1 && day<=20)))
    {
        Zodiac_sign="Pisces";
    }
    return Zodiac_sign;
}
