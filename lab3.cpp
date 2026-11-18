//constructor types DEfault, Parametrized, Copy & Move

#include <iostream>
using namespace std;

class A
{
private:
    int *x;

public:
    A()
    {
        x = 0;
        cout << "Default Constructor called" << endl;
    }

    A(int a)
    {
        x = new int(a);
        cout << "Parameterized Constructor called" << endl;
    }

    A(A &obj)
    {
        x = (obj.x != nullptr) ? new int(*obj.x) : nullptr;
        cout << "Copy Constructor called" << endl;
    }

    A(A &&obj)
    {
        x = obj.x;
        obj.x = nullptr;
        cout << "Move Constructor called" << endl;
    }

    A& operator=(const A &obj)
    {
        if (this != &obj)
        {
            delete x;
            x = (obj.x != nullptr) ? new int(*obj.x) : nullptr;
        }

        cout << "Copy Assignment operator called" << endl;
        return *this;
    }

    A& operator=(A &&obj)
    {
        if (this != &obj)
        {
            delete x;
            x = obj.x;
            obj.x = nullptr;
        }

        cout << "Move Assignment operator called" << endl;
        return *this;
    }

    void print()
    {
        if (x != nullptr)
            cout << "Value = " << *x << endl;
        else
            cout << "Object has no value" << endl;
    }

    ~A()
    {
        delete x;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "---" << endl;

    A obj1;
    obj1.print();

    cout << "---" << endl;

    A obj2(100);
    obj2.print();

    cout << "---" << endl;

    A obj3(obj2);
    obj3.print();

    cout << "---" << endl;

    A obj4(std::move(obj2));
    obj4.print();

    cout << "---" << endl;

    A obj5(50);
    obj5 = obj3;
    obj5.print();

    cout << "---" << endl;

    A obj6(25);
    obj6 = std::move(obj1);
    obj6.print();

    return 0;
}