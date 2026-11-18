//data types, constnts, variables, opeartors and I/O

#include <iostream>
using namespace std;

int main()
{
    int roll = 20;
    float marks = 85.5;
    char grade = 'A';
    const int total_marks = 100;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int sum = num + roll;
    int difference = num - roll;
    int product = num * roll;

    cout << "Data Types:" << endl;
    cout << "Age: " << roll << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    cout << "Constants:" << endl;
    cout << "Total Marks: " << total_marks << endl;

    cout << "Operators:" << endl;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Diference: "<<difference<<endl;
    cout<<"product: "<<product<<endl;
    return 0;
}