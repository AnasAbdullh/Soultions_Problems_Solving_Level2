#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPostitiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    int Random = 0;
    Random = rand() % (To - From + 1) + From;
    return Random;
}
string ColmSperator(short i)
{
    if (i > 10)
    {
        return " [  ]";
    }
    else
    {
        return " [  ]";
    }
}
void checkNumberUser(int user)
{
    string key = "";
    for (short c = 1; c <= user; c++)
    {

        for (short i = 1; i <= 29; i++)
        {
            char rand = char(RandomNumber(65, 90));

            if (i == 6 || i == 12 || i == 18 || i == 24)
            {
                key += '-';
                continue;
            }
            key += rand;
        }
        cout << " Key [" << c << " ] : " << key << endl;
        key = "";
    }
}
int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    checkNumberUser(ReadPostitiveNumber("Enter Number"));

    return 0;
}