#include "grade.h"

int main() {

Student student1("Tayjaun Villafranco");
student1.addGrade(70.4);
student1.addGrade(83.6);
student1.addGrade(66.2);
student1.addGrade(90.5);
//delete the grades to check if the terminal tells us if its empty
student1.printDetails();

    return 0;
}
