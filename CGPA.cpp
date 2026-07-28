#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;
    float grade, credit;

    cout << "========== CGPA Calculator ==========\n";
    cout << "Enter the number of courses: ";
    cin >> n;

    float grades[n], credits[n];

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point (0 - 10): ";
        cin >> grade;
        grades[i] = grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;
        credits[i] = credit;

        totalCredits += credit;
        totalGradePoints += (grade * credit);
    }

    float GPA = totalGradePoints / totalCredits;
    float CGPA = GPA;   // Since only one semester is considered

    cout << "\n========== RESULT ==========\n";
    cout << left << setw(10) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << i + 1
             << setw(15) << grades[i]
             << setw(15) << credits[i] << endl;
    }

    cout << "\nTotal Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Semester GPA       : " << GPA << endl;
    cout << "Overall CGPA       : " << CGPA << endl;

    return 0;
}