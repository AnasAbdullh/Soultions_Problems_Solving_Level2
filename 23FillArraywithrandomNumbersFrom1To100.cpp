#include <iostream>
#include <string>
using namespace std;

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
int RandomNumber(int From, int To)
{
    // Function to Generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void PrintArray(int Arraylength)
{

    for (size_t i = 0; i < Arraylength; i++)
    {
        cout << RandomNumber(1, 100) << " ";
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int  length = 0;
    length = ReadPositiveNumber("Enter Number ");
    PrintArray(length);

    return 0;
}
