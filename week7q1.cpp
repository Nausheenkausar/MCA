#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    char *ptr = &str[0];

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }

    cout << "Number of vowels = " << count << endl;

    return 0;
}

