#include <iostream>
#include <cstdlib>

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
void PrintNumberUser(int input)
{
    for (size_t i = 1; i <= input; i++)
    {
        cout << " Key [" << i << "] :";
        cout << GenerateKey() << endl;
    }
}

int main(int argc, char const *argv[])
{
    PrintNumberUser(ReadPositiveNumber("Enter Number"));
    // enCharType charType = enCharType::CapitalLetter;

    return 0;
}
