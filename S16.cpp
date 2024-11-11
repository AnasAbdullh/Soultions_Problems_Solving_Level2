#include <iostream>
using namespace std;
void PrintAllWorldsAAAToZZZ()
{
    string word = "";
    for (size_t A = 65; A <= 90; A++)
    {
        for (size_t B = 65; B <= 90; B++)
        {
            for (size_t C = 65; C <= 90; C++)
            {
                word += A;
                word += B;
                word += C;
                
                cout << word << "\n";

                word = "";
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    PrintAllWorldsAAAToZZZ();
    return 0;
}
