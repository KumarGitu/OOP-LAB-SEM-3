//File Handling Using CSV

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream createFile("students.csv");

    if (!createFile)
    {
        cout << "File creation failed!";
        return 1;
    }

    createFile << "RollNo,Name,Marks\n";
    createFile << "1,Aman,85\n";
    createFile << "2,Riya,90\n";
    createFile << "3,Rahul,78\n";

    createFile.close();

    cout << "Student records saved successfully.\n";

    fstream file("students.csv", ios::in | ios::out);

    if (!file.is_open())
    {
        cout << "File could not be opened!";
        return 1;
    }

    cout << "Write pointer: " << file.tellp() << endl;

    file.seekg(0, ios::beg);

    cout << "Read pointer: " << file.tellg() << endl;

    cout << "\nStudent Records:\n";

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.clear();

    file.seekp(0, ios::end);

    cout << "\nWrite pointer at end: "
         << file.tellp() << endl;

    file.close();

    return 0;
}
