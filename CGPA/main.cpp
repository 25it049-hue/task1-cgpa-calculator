#include <iostream>
#include <iomanip>
using namespace std;

int gradeToPoint(string grade) {
    if (grade == "O") return 10;
    if (grade == "A+") return 9;
    if (grade == "A") return 8;
    if (grade == "B+") return 7;
    if (grade == "B") return 6;
    if (grade == "C") return 5;
    return 0; // F
}

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    string grade;
    int credit;
    int totalCredits = 0;
    int totalGradePoints = 0;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;
        cout << "Enter grade (O, A+, A, B+, B, C, F): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        int gradePoint = gradeToPoint(grade);
        totalCredits += credit;
        totalGradePoints += gradePoint * credit;
    }

    double CGPA = (double)totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Final CGPA: " << fixed << setprecision(2) << CGPA << endl;

    return 0;
}
