//compile time polymorphism

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }

    void display(string msg)
    {
        cout << msg << a << "+" << b << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;

        temp.a = a + c.a;
        temp.b = b + c.b;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getdata();

    cout << "Enter second complex number:\n";
    c2.getdata();

    c1.display();
    c2.display("Second complex number: ");

    c3 = c1 + c2;

    cout << "Sum: ";
    c3.display();

    return 0;
}