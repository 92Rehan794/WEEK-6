#include<iostream>
using namespace std;

string calculateHotelPrices(string, int);
main()
{
    string month;
    int days;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;

    string price = calculateHotelPrices(month,days);
    cout << price;
}

string calculateHotelPrices(string month, int days)
{
    float amount_studio, amount_apartment;
    if (month == "May" || month == "October")
    {
        // studio
        if (days <= 7)
        {
            amount_studio = days * 50;
        }
        else if (days > 7 && days <= 14)
        {
            amount_studio = days * 50 * 0.95;
        }
        else if (days > 14 )
        {
            amount_studio = days * 50 * 0.70;
        }

        // apartment
        if (days > 14)
        {
            amount_apartment = days * 65 *0.9;
        }
        else
        {
            amount_apartment = days * 65;
        }

     
    }
    else if (month == "June" || month == "September")
    {
        // studio
        if (days > 14)
        {
            amount_studio = days * 75.20 *0.80;
        }
        else
        {
            amount_studio = days * 75.20;
        }
        // apartment
        if (days > 14)
        {
            amount_apartment = days * 68.70 *0.9;
        }
        else
        {
            amount_apartment = days * 68.70;
        } 
    }
    else if (month == "July" || month == "August")
    {
        //studio
        amount_studio = days * 76;
        // apartement
        if (days > 14)
        {
            amount_apartment = days * 77.0 *0.9;
        }
        else
        {
            amount_apartment = days * 77.00;
        } 
        
    }
    else
    {
        return "Enter Valid Input";
    }
    string result = "Apartment: $" + to_string(amount_apartment) +"\nStudio: $" + to_string(amount_studio) ;
    return result;

}