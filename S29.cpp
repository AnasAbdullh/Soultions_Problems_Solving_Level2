#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

enum enPrimeOrNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int RandomNumber(int From, int To)
{
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void ReadyFillArrayWithNumber(int Array[], int &Length)
{
    cout << "Enter The Number of Elements in the Array: ";
    cin >> Length;
    for (size_t i = 0; i < Length; i++)
    {
        Array[i] = RandomNumber(1, 100); // Fill array with random numbers
    }
}

enPrimeOrNotPrime IsCheckNumberPrime(int Number)
{
    if (Number < 2) // Any number less than 2 is not prime
        return enPrimeOrNotPrime::NotPrime;

    int M = round(Number / 2);
    for (int count = 2; count <= M; count++)
    {
        if (Number % count == 0)
        {
            return enPrimeOrNotPrime::NotPrime; // Not prime if divisible by any number
        }
    }
    return enPrimeOrNotPrime::Prime;
}

void PrintArray(int Array[], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void CheckPrime(int Array[], int length, int Prime[], int &PrimeLength)
{
    PrimeLength = 0; // Initialize the length of the prime array to zero
    for (int i = 0; i < length; i++)
    {
        if (IsCheckNumberPrime(Array[i]) == enPrimeOrNotPrime::Prime)
        {
            Prime[PrimeLength] = Array[i]; // Store prime numbers
            PrimeLength++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL)); // Seed random number generator
    int Array[100], Length, Prime[100], PrimeLength;

    ReadyFillArrayWithNumber(Array, Length);
    cout << "The Array Elements: ";
    PrintArray(Array, Length);

    CheckPrime(Array, Length, Prime, PrimeLength);
    cout << "Prime Numbers: ";
    PrintArray(Prime, PrimeLength);

    return 0;
}
