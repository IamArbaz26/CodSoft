#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int max_students = 100;
    string studentNames[max_students];
    double studentGrades[max_students];

    int numStudents;

    cout << " -----------------------" << endl;
    cout << "\t" << "Grade System" << endl;
    cout << " -----------------------" << endl;

    cout << " Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) 
    {
        cout << " Enter name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << " Enter grade of student " << studentNames[i] << ": ";
        cin >> studentGrades[i];
    }

    double totalGrades = 0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (int i = 0; i < numStudents; i++) 
    {
        totalGrades += studentGrades[i];
        if (studentGrades[i] > highestGrade) 
        {
            highestGrade = studentGrades[i];
        }
        if (studentGrades[i] < lowestGrade) 
        {
            lowestGrade = studentGrades[i];
        }
    }

    double averageGrade = totalGrades / numStudents;

    cout << " --------------------------------------" << endl;
    cout << "\t" << "Student Grades Summary:" << endl;
    cout << " --------------------------------------" << endl;

    for (int i = 0; i < numStudents; ++i) 
    {
        cout << "\t" << studentNames[i] << ": " << studentGrades[i] << endl;
    }

    cout << "\t" << "Average Grade: " << averageGrade << endl;
    cout << "\t" << "Highest Grade: " << highestGrade << endl;
    cout << "\t" << " Lowest Grade: " << lowestGrade << endl;

    return 0;
}
