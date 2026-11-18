//Custom Exception Handling

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<int> marks = {85, 72, 95, 60, 88};
    map<int, string> students = {
        {1, "Aman"},
        {2, "Riya"},
        {3, "Rahul"},
        {4, "Priya"},
        {5, "Karan"}
    };
    unordered_map<int, int> studentMarks;

    for (int i = 0; i < marks.size(); i++)
    {
        studentMarks[i + 1] = marks[i];
    }
    cout << "Student Records:\n";

    for (auto s : students)
    {
        cout << "Roll No: " << s.first
             << ", Name: " << s.second
             << ", Marks: " << studentMarks[s.first]
             << endl;
    }
    sort(marks.begin(), marks.end(), greater<int>());

    cout << "\nMarks in Descending Order:\n";

    for (int m : marks)
    {
        cout << m << " ";
    }
    auto it = find_if(marks.begin(), marks.end(),
                      [](int m) {
                          return m > 90;
                      });

    if (it != marks.end())
    {
        cout << "\n\nHighest qualifying mark: " << *it;
    }
    else
    {
        cout << "\nNo student scored above 90.";
    }
    vector<string> results;

    transform(marks.begin(), marks.end(),
              back_inserter(results),
              [](int m) {
                  return to_string(m) + "%";
              });

    cout << "\n\nMarks in Percentage Format:\n";

    for (string result : results)
    {
        cout << result << " ";
    }

    return 0;
}