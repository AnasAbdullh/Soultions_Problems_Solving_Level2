#include <iostream>
#include <string>

using namespace std;
string ReadText()
{
    string txt = "";
    cout << " Enter Text " << endl;
    cin >> txt;

    return txt;
}
string Encrypt(string txt)
{

    short length = txt.length() - 1;
    string sum = " ";

    for (short i = 0; i <= length; i++)
    {
        char entype = txt[i] + 2;
        sum = sum + entype;
    }
    return sum;
}
string Decrypt(string Encrypt)
{

    short length = Encrypt.length() - 1;
    string Sum = " ";

    for (short i = 0; i <= length; i++)
    {
        char Detype = Encrypt[i] - 2;
        Sum = Sum + Detype;
    }
    return Sum;
}

int main(int argc, char const *argv[])
{

    string Text = ReadText();
    string Encrypttions = Encrypt(Text);

    cout << " Text Before Encryption " << Text << endl;
    cout << " Text After Encryption " << Encrypt(Text) << endl;
    cout << " Text After Encryption " << Decrypt(Encrypttions) << endl;

    return 0;
}