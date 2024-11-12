#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
    string Password;
    cout << "Enter Password System " << endl;
    cin >> Password;
    return Password;
}
bool GuessPassword(string OriginalPassword)
{
    string Word = "";
    int count = 0;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char b = 'A'; b <= 'Z'; b++)
        {
            for (char c = 'A'; c <= 'Z'; c++)
            {

                Word += i;
                Word += b;
                Word += c;
                count++;

                cout << "Trial [" << count << "] : " << Word << endl;

                if (OriginalPassword == Word)
                {
                    cout << "\n Password is " << Word << endl;
                    cout << " Found After " << count << " Trial(s)" << endl;
                    return true;
                }
                Word = "";
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    GuessPassword(ReadPassword());
    return 0;
}
