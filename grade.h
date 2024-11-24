#include <string>
#include <iostream>
using namespace std;
#include <vector>

class Student {

public:
    Student(string studentName);
    void addGrade(double grade);
    double calculateAverage();
    void printDetails();

private:
    string name;
    vector<double> grades;
    
};
