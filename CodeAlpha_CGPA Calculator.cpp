#include <iostream>
using namespace std;

int main() {
    int numCourses;
    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;                                                 
    
    cout << "Enter number of courses taken: ";
    cin >> numCourses;

    // Arrays to store course details
    float grades[numCourses];
    float credits[numCourses];

    // Input grades and credit hours
    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade (e.g. 4.0, 3.7, 3.0): ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // Calculate GPA / CGPA   
    float cgpa = totalGradePoints / totalCredits;

    // Display results
    cout << "\n----- Course Details -----\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1
             << " | Grade: " << grades[i]
             << " | Credit Hours: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}

