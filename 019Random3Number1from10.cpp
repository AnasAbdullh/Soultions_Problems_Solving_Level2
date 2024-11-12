#include <cstdlib>
#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random Number
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

int main(int argc, char const *argv[])
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    cout << RandomNumber(1, 4) << endl;
    // cout << RandomNumber(1, 10) << endl;
    // cout << RandomNumber(1, 50) << endl;

    return 0;
}