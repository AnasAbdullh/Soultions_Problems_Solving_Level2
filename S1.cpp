#include <iostream>
using namespace std;

void PrintTableHearder()
{
    cout << "\n\n\t\t\tMultipliaction From 1 To 10\n\n";
    cout << "\t";

    for (size_t i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n___________________________________________________________________________________\n";
}
string ColmSperator(short i)
{
    if (i < 10)
    {
        return "   |";
    }
    else
    {
        return "  |";
    }
}
void PrintMultipliactionTable()
{
    PrintTableHearder();
    for (short i = 1; i <= 10; i++)
    {
        cout << " " << i << ColmSperator(i) << "\t";
        for (size_t c = 1; c <= 10; c++)
        {
            cout << i * c << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultipliactionTable();

    return 0;
}