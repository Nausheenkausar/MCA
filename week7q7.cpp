#include <iostream>
using namespace std;

class Demo
{
    int num;

public:
    void setData(int n)
    {
        this->num = n;
    }

    // Return the pointer to the current object
    Demo* getObject()
    {
        return this;
    }

    void display()
    {
        cout << "Number = " << this->num << endl;
    }
};

int main()
{
    Demo obj;

    obj.setData(50);

    // Store the returned object pointer
    Demo *ptr = obj.getObject();

    // Access the object using pointer
    ptr->display();

    return 0;
}

