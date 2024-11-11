#include <iostream>
using namespace std;

void PrintAllWorldsAAAToZZZ()
{

    for (char i = 65; i <= 90; i++)
    {
        for (char v = 65; v <= 90; v++)
        {
            cout << i << i << v << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    PrintAllWorldsAAAToZZZ();
    return 0;
}
