#include <iostream>
#include <string>
using namespace std;

// Function to insert a substring
string insertSubstring(string str, string sub, int pos)
{
    str.insert(pos, sub);
    return str;
}

// Function to delete n characters
string deleteCharacters(string str, int pos, int n)
{
    str.erase(pos, n);
    return str;
}

int main()
{
    string str, sub;
    int pos, n, choice;

    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "\n1. Insert substring";
    cout << "\n2. Delete characters";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter substring to insert: ";
        cin >> sub;

        cout << "Enter position: ";
        cin >> pos;

        str = insertSubstring(str, sub, pos);

        cout << "String after insertion: " << str << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter position: ";
        cin >> pos;

        cout << "Enter number of characters to delete: ";
        cin >> n;

        str = deleteCharacters(str, pos, n);

        cout << "String after deletion: " << str << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

