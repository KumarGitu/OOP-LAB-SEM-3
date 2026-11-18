//Multi level Inheritance 

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void data()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
protected:
    int choice;
    int roll, marks;
    string urn;

public:
    void getdata()
    {
        cout << "Select category:\n";
        cout << "1. Student\n";
        cout << "2. Faculty\n";
        cout << "3. Other\n";

        cout << "Enter choice: ";
        cin >> choice;

        data();

        if (choice == 1)
        {
            cout << "Enter roll number: ";
            cin >> roll;

            cout << "Enter URN: ";
            cin >> urn;

            cout << "Enter marks: ";
            cin >> marks;
        }
    }

    void display()
    {
        cout << "\nDetails of Person:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        if (choice == 1)
        {
            cout << "Category: Student\n";
            cout << "Roll Number: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }
        else if (choice == 2)
        {
            cout << "Category: Faculty\n";
        }
        else
        {
            cout << "Category: Other\n";
        }
    }
};

class GraduateStudent : public Student
{
};

int main()
{
    GraduateStudent obj;

    obj.getdata();
    obj.display();

    return 0;
}