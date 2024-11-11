#include <iostream>
#include <cstdlib>
using namespace std;

enum enRandomNumber
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialC = 3,
    DigitOrder = 4
};
int RandomNumber(int From, int To)
{
    // Function to generate a random Number
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}
void RandomLetterCharachterDigit(enRandomNumber Random)
{
    if (Random == enRandomNumber::SmallLetter)
    {
        cout << char(RandomNumber(97, 122)) << endl;
    }
    else if (Random == enRandomNumber::CapitalLetter)
    {
        cout << char(RandomNumber(65, 90)) << endl;
    }
    else if (Random == enRandomNumber::SpecialC)
    {
        cout << char(RandomNumber(32, 47)) << endl;
    }
    else if (Random == enRandomNumber::DigitOrder)
    {
        cout << (RandomNumber(1, 100)) << endl;
    }
}

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    enRandomNumber Smalettel = enRandomNumber::SmallLetter;
    enRandomNumber Caplettel = enRandomNumber::CapitalLetter;
    enRandomNumber SpacialChar = enRandomNumber::SpecialC;
    enRandomNumber DigitNumber = enRandomNumber::DigitOrder;

    RandomLetterCharachterDigit(Smalettel);
    RandomLetterCharachterDigit(Caplettel);
    RandomLetterCharachterDigit(SpacialChar);
    RandomLetterCharachterDigit(DigitNumber);

    return 0;
}
