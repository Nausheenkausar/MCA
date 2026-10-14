#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;

    cout << "Enter string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);

    int pos = S.find(T);

    if (pos != string::npos)
    {
        cout << "Position of T in S = " << pos << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    return 0;
}

