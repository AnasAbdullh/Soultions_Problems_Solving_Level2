#include <iostream>
#include <string>

using namespace std;
string ReadText()
{
    string txt = "";
    cout << " Enter Text " << endl;
    getline(cin, txt);

    return txt;
}
string Encryptions(string txt, short EncrtypTionKey)
{
    for (short i = 0; i <= txt.length(); i++)
    {
        txt[i] = char((int)txt[i] + EncrtypTionKey);
    }
    return txt;
}
string Decryptions(string txt, short EncrtypTionKey)
{
    for (size_t i = 0; i < txt.length(); i++)
    {
        txt[i] = char((int)txt[i] - EncrtypTionKey);
    }
    return txt;
}

int main(int argc, char const *argv[])
{
    short EncrytpionsKey = 2;
    string Text = ReadText();

    string EncryptionsAfterText = Encryptions(Text, EncrytpionsKey);
    string DecryptionsAfterText = Decryptions(EncryptionsAfterText, EncrytpionsKey);

    cout << " Text Before Encryption " << Text << endl;
    cout << " Text After Encryption " << EncryptionsAfterText << endl;
    cout << " Text After Encryption " << DecryptionsAfterText << endl;

    return 0;
}
