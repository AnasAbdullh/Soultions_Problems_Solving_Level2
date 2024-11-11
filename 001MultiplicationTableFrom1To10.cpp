#include <iostream>
using namespace std;
void PrintMulitplication()
{
    cout << "\t\t\t Multiplication From 1 to 10" << endl;
    cout << endl;
    cout << "\t\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n"
         << endl;
    cout << "___________________________________________________________________________________________________" << endl;
}
void CalculateMultipication()
{
    for (size_t i = 1; i <= 10; i++)
    {

        cout << i;
        cout << "\t | \t";
        for (size_t count = 1; count <= 10; count++)
        {
            int sum = i * count;

            cout << "\t";
            cout << sum;
        }
        cout << "\n";
    }
}
int main()
{

    PrintMulitplication();
    CalculateMultipication();

    return 0;
}
