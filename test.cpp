#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

// Problem 21/corse5 Generate Kees;.
//***********************************************My Solution 01
int Readrandnum()
{
    int Number;
    cout << "Please input Number" << endl;
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}
int GuetGeneratekeys(int Number)
{
    int counter = 0;

    for (int counter = 1; counter <= Number; counter++)
    {
        cout << "key [" << counter << "]: ";
        for (int i = 1; i <= 4; i++)
        {
            cout << char(RandomNumber(65, 90)); // Present one Letter in key
            cout << char(RandomNumber(65, 90)); // Present second Letter in key
            cout << char(RandomNumber(65, 90)); // Present thierd Letter in key
            cout << char(RandomNumber(65, 90)); // Present forth Letter in key

            if (i == 4)
            {

                continue;
            }
            cout << "-";
        }

        cout << endl;
    }

    return Number;
}

int main()
{
    // seed the random number Generator in C++,called only Once.
    srand((unsigned)time(NULL)); // obligatoir d'ecrire se code pour random().

    int Number = Readrandnum();
    GuetGeneratekeys(Number);

    return 0;
}