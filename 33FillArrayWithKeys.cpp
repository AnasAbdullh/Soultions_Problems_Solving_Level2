#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharater = 3,
    Digit = 4
};
int RandomNumber(int From, int To)
{
    // Function to Generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharater:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
    return '?';
}
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (size_t i = 1; i <= Length; i++)
    {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}
string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}
void FillArrayWhitNumber(int input, string Array[100])
{
    for (size_t i = 0; i < input; i++)
    {

        Array[i] = GenerateKey();
    }
}
void PrintStringArray(string Array[100], int Length)
{
    cout << "\nThe Elements Array \n\n";
    for (size_t i = 0; i < Length; i++)
    {
        cout << " Key [" << i << "] : ";
        cout << Array[i] << endl;
    }
    cout << "\n";
}
int main(int argc, char const *argv[])
{

    int ReadNumber = ReadPositiveNumber("Enter Number");
    string Array[100];

    FillArrayWhitNumber(ReadNumber, Array);
    PrintStringArray(Array, ReadNumber);

    // enCharType charType = enCharType::CapitalLetter;

    return 0;
}
