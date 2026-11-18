//genric stack or queue class using templates

#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if (top == 4)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            arr[++top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Stack<int> s1;
    Stack<float> s2;
    Stack<string> s3;

    int n, i, x;
    float f;
    string str;

    cout << "Enter number of integer elements (max 5): ";
    cin >> n;

    cout << "Enter integer elements: ";

    for (i = 0; i < n && i < 5; i++)
    {
        cin >> x;
        s1.push(x);
    }

    s1.display();

    cout << "Enter number of float elements (max 5): ";
    cin >> n;

    cout << "Enter float elements: ";

    for (i = 0; i < n && i < 5; i++)
    {
        cin >> f;
        s2.push(f);
    }

    s2.display();

    cout << "Enter number of string elements (max 5): ";
    cin >> n;

    cout << "Enter string elements: ";

    for (i = 0; i < n && i < 5; i++)
    {
        cin >> str;
        s3.push(str);
    }

    s3.display();

    return 0;
}