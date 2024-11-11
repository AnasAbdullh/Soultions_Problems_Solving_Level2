#include <iostream>
using namespace std;

string ReadPositiveNumber(string Message)
{
    string Number = "";

    cout << Message << endl;
    cin >> Number;

    return Number;
}

void PrintAllWorldsAAAToZZZ(string Number)
{
    int count = 0;
    string word = "";
    for (size_t A = 'A'; A <= 'Z'; A++)
    {
        for (size_t B = 'A'; B <= 'Z'; B++)
        {
            for (size_t C = 'A'; C <= 'Z'; C++)
            {
                word += A;
                word += B;
                word += C;
                count++;
                cout << " Trail " << "[" << count << "]" << " : " << word << endl;

                if (Number == word)
                {
                    cout << " Password is " << word << endl;
                    cout << " Found After " << count << " trial(s)" << endl;
                    return;
                }

                //   cout << word << "\n";

                word = "";
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    PrintAllWorldsAAAToZZZ(ReadPositiveNumber("Entet password"));
    return 0;
}
