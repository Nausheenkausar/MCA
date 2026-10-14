#include <iostream>
using namespace std;

class Greatest
{
    int a, b, greatest;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    int findGreatest()
    {
        if (a > b)
            this->greatest = a;
        else
            this->greatest = b;

        return this->greatest;
    }
};

int main()
{
    Greatest obj;

    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    obj.setData(x, y);

    cout << "Greatest number = " << obj.findGreatest() << endl;

    return 0;
}

