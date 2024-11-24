#include "grade.h"
#include <iomanip>
#include <cmath>


Student::Student(string studentName) {
    name = studentName;
}

void Student::addGrade(double grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() {
    int sum = 0;
    for (double grade : grades) {
        sum += grade;
    }
    double average = sum / grades.size();
    return round(average * 100.0) / 100.0;
}

void Student::printDetails() {
    cout << "Student name: " << name << endl;
    if (grades.empty()) {
        cout << "0.0" << endl;
    } else {
        cout << "Grades for the semester: ";
        for (double grade : grades) {
        cout << grade << " ";
    }
    cout << endl;
    
    double average = calculateAverage();
    cout << "Average for the semester: " << fixed << setprecision(2) << average << endl;
    }
}