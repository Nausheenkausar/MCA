#include <iostream>
using namespace std;

class pntr_obj
{
    int roll_no;
    string name;

public:
    // Function to set data
    void set_data(int roll_no, string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }

    // Function to print data using this pointer
    void print()
    {
        cout << "Roll No: " << this->roll_no << endl;
        cout << "Name: " << this->name << endl;
        cout << "Object Address: " << this << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    // Creating three objects
    pntr_obj obj1, obj2, obj3;

    // Setting data
    obj1.set_data(101, "Rahul");
    obj2.set_data(102, "Amit");
    obj3.set_data(103, "Priya");

    // Calling print() for each object
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}

