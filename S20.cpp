#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int To)
{

    int Rand = 0;
    Rand = rand() % (To - from + 1) + from;
    return Rand;
}
enum enCharType
{
    SmallLetter = 1,
    CaptialLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};
char GetRandomCharater(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CaptialLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
    return '?'; // قيمة افتراضية عند عدم تحقق أي حالة
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharater(enCharType::SmallLetter) << endl;
    cout << GetRandomCharater(enCharType::CaptialLetter) << endl;
    cout << GetRandomCharater(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharater(enCharType::Digit) << endl;

    return 0;
}
