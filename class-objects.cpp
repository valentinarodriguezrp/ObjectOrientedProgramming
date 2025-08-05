/************************************************************
Valentina Rodriguez
Programming Project 5: classes
Date: April 20, 2025
hours spent on project: 1
************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string major;
    double overallGPA;
    int id;

public:
    Student() {
        name = "";
        major = "";
        overallGPA = 0.0;
        id = -1;
    }
    Student(string n, string m, double gpa, int ID) : name(n), major(m), overallGPA(gpa), id(ID) {}

    void SetName(string n) 
    { 
        name = n; 
    }
    string GetName() 
    {
        return name; 
    }

    void SetMajor(string m) 
    { 
        major = m; 
    }
    string GetMajor() 
    { 
        return major; 
    }

    void SetID(int i) 
    { 
        id = i; 
    }
    int GetID() 
    {
        return id; 
    }

    void SetGPA(double g) 
    { 
        overallGPA = g; 
    }
    double GetGPA() 
    { 
        return overallGPA; 
    }
};

int main()
{
    const int NUM_STUDS = 10;
    Student studs[NUM_STUDS] = {
        Student("Brittney Spears", "Music", 3.85, 1001),
        Student("Britney", "Music", 3.20, 1002),
        Student("Valentina", "Computer Sci", 3.70, 1003),
        Student("Valentins", "Business", 3.95, 1004),
        Student("victoria", "Physics", 2.80, 1005),
        Student("Victoria Rodriguez", "Literature", 3.60, 1006),
        Student("Roberto", "Accounting", 3.00, 1007),
        Student("Deyanira Peroxo", "Math", 3.92, 1008),
        Student("Ebony", "Business", 3.40, 1009),
        Student("Anna Barnes", "Marketing", 3.65, 1010)
    };

    cout << "--------------------------------------------------------------\n";
    cout << "| " << left << setw(20) << "Name"
        << "| " << setw(8) << "ID"
        << "| " << setw(15) << "Major"
        << "| " << setw(6) << "GPA" << " |\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < NUM_STUDS; ++i) {
        cout << "| " << left << setw(20) << studs[i].GetName()
            << "| " << setw(8) << studs[i].GetID()
            << "| " << setw(15) << studs[i].GetMajor()
            << "| " << fixed << setprecision(2) << setw(6) << studs[i].GetGPA() << " |\n";
    }

    cout << "--------------------------------------------------------------\n";

    return 0;
}