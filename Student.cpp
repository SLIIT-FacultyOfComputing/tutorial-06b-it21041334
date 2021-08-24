#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int num , char sname[]) {
  studentId = num;
  strcpy (name, sname)
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id :" << StudentId << endl;
  cout << "Name " << name <<endl;
  
}
