// Name: Muhammed Motiwala
// Assignment: Lab 3
// This program will tell you how long it takes a soundwave to travel a specific distance

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int chosen;
    double feetIn;
    double soundLen;
    const int AIRLEN = 1100;
    const int WATLEN = 4900;
    const int STEELLEN = 16400;
    
    cout << "This program will tell you how long it takes a soundwave to travel a specific distance \n through a particlular medium.\n\n";
    
    cout << "Select a substance for the sound to travel through: \n \t 1. Air\n\t 2. Water\n\t 3. Steel\n ";
    
    cin >> chosen;
    
    if (chosen == 1)
    {
        cout << "Enter the number of feet the sound wave will travel : ";
        cin >> feetIn;
        soundLen = (feetIn / AIRLEN);

        cout << "The sound wave will travel " << feetIn << " feet through air in " << fixed << showpoint << setprecision(4) << soundLen << " seconds.\n";
    }
    else if (chosen == 2)
    {
        cout << "Enter the number of feet the sound wave will travel : ";
        cin >> feetIn;
        soundLen = (feetIn / WATLEN);
        //cout << fixed << showpoint << setprecision(4);
        cout << "The sound wave will travel " << feetIn << " feet through water in " << fixed << showpoint << setprecision(4) <<  soundLen << " seconds.\n";
    }
    else if (chosen == 3)
    {
        cout << "Enter the number of feet the sound wave will travel : ";
        cin >> feetIn;
        soundLen = (feetIn / STEELLEN);
        cout << "The sound wave will travel " << feetIn << " feet through steel in " << fixed << showpoint << setprecision(4) << soundLen << " seconds.\n";
    }
    else
    {
        cout << "rerun program and choose a valid option\n";
    }
    
    cout << "--------------------------------------------------------------------\n\n";
    
}
