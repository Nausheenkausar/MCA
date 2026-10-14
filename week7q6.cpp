#include <iostream>
#include <string>
using namespace std;

class Flight
{
    int flight_no;
    string source;
    string destination;
    float fare;

public:
    // Function to set flight details
    void setData(int flight_no, string source, string destination, float fare)
    {
        this->flight_no = flight_no;
        this->source = source;
        this->destination = destination;
        this->fare = fare;
    }

    // Function to display flight information
    void display()
    {
        cout << "Flight Number : " << this->flight_no << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main()
{
    Flight f;

    f.setData(101, "Delhi", "Mumbai", 5500);

    cout << "Flight Information" << endl;
    cout << "------------------" << endl;

    f.display();

    return 0;
}

