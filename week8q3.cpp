#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, findStr, replaceStr;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the string to find: ";
    getline(cin, findStr);

    cout << "Enter the string to replace it with: ";
    getline(cin, replaceStr);

    size_t pos = sentence.find(findStr);

    if (pos != string::npos)
    {
        sentence.replace(pos, findStr.length(), replaceStr);
        cout << "Updated sentence: " << sentence << endl;
    }
    else
    {
        cout << "String not found." << endl;
    }

    return 0;
}

