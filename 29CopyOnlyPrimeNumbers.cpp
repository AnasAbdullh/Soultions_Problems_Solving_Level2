#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int RandomNumber(int From, int To)
{
    int randNUmber = rand() % (To - From + 1) + From;
    return randNUmber;
}
void ReadyFillArraywhitNumber(int Array[100], int &Length)
{
    cout << "Enter The Elements Array " << endl;
    cin >> Length;
    for (size_t i = 0; i < Length; i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Array[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
}
void IsCheckNumberPrime(int Array[100], int length, int Prime[100])
{

    for (short i = 0; i < length; i++)
    {
        int M = round(Array[i] / 2);
        for (short count = 2; count <= M; count++)
        {
            if (Array[i] % count == 0)
            {
             
            }
            else
            {
                Prime[i] = Array[i];

            }
        }
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int Array[100], length, prime[100];
    ReadyFillArraywhitNumber(Array, length);
    cout << "The Elements Number " << ": ";
    PrintArray(Array, length);
    cout << endl;
     IsCheckNumberPrime(Array, length, prime);
     PrintArray(prime, length);

    return 0;
}
