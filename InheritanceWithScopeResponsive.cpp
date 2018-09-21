// Header Files
#include<iostream>

#include<stdio.h>
#include<conio.h>

using namespace std;

class Person {
    int eno;
    char name[20], des[20];
    // Private members cannot call from outside class.
public:
    void getPersonDetails() {
        cout << "\nEnter the Person number:";
        cin>>eno;
        cout << "Enter the Person name:";
        cin>>name;
        cout << "Enter the Person designation:";
        cin>>des;
    }

    void person_display() {
    	cout <<"\nPerson number:"<<eno;
		cout <<"\nPerson name:"<<name;
		cout <<"\nPerson designation:"<<des;
    }
};

class Employee : private Person {
	//Private Base Class, We cannot access outside the dervied Class
    float bp, hra, da, pf, np;
public:

    void getEmployeeDetails() {
    	getPersonDetails();
        cout << "Enter the Basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
        calculate();
    }

    void calculate() {
        np = bp + hra + da - pf;
    }

    void employee_display() {
    	person_display();
    	cout <<"\nEmployee Basic pay:"<<bp;
		cout <<"\nEmployee Humen Resource Allowance:"<<hra;
		cout <<"\nEmployee Dearness Allowance:"<<da;
		cout <<"\nEmployee Profitablity Fund:"<<pf;
		cout <<"\nEmployee Net Pay:"<<np;
    }
};

class Student : private Person {
	char college[20], course[20];
	public:
	void getStudentDetails() {
    	getPersonDetails();
        cout << "Enter the Student college Name:";
        cin>>college;
        cout << "Enter the Student course Name:";
        cin>>course;
    }

    void student_display() {
    	person_display();
    	cout <<"\nStudent college Name:"<<college;
		cout <<"\nStudent IFSC:"<<course<<endl;
    }
};

int main() {
    int i, n;
    char ch;
    Student s[10];
    Employee e[10];
    cout << "Simple Hierarchical Inheritance Example Program : Payroll System \n";

	cout << "Enter the number of Student:";
    cin>>n;
    for (i = 0; i < n; i++) {
    	cout << "\nStudent Details # "<<(i+1)<<" : ";
        s[i].getStudentDetails();
    }

    for (i = 0; i < n; i++) {
        s[i].student_display();
    }

    cout << "\n\nEnter the number of Employee:";
    cin>>n;
    for (i = 0; i < n; i++) {
    	cout << "\nEmployee Details # "<<(i+1)<<" : ";
        e[i].getEmployeeDetails();
    }

    for (i = 0; i < n; i++) {
    e[i].employee_display();
    }
    getch();

    return 0;
}
