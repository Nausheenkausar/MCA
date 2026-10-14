#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string sentence, word, temp;
    int count = 0;

    cout << "Enter a line of text: ";
    getline(cin, sentence);

    cout << "Enter the word to count: ";
    cin >> word;

    // Convert the sentence into individual words
    stringstream ss(sentence);

    while (ss >> temp)
    {
        if (temp == word)
        {
            count++;
        }
    }

    cout << "The word \"" << word << "\" occurs "
         << count << " time(s)." << endl;

    return 0;
}

