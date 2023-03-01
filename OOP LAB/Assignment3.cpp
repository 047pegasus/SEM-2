//
// Created by Tanishq Agarwal on 5/23/2022.
//
#include <iostream>
#include <string>

using namespace std;

//question 1
class student {
public:
    string name;
    int branch_number;
};

class CSE : public student {
public:
    int CSE_sub1_marks;
    int CSE_sub2_marks;
    int CSE_sub3_marks;

    void setdata() {
        branch_number = 1;
        cout << "Enter name of student" << endl;
        getline(cin, name);
        cout << "Enter marks for subject 1:" << endl;
        cin >> CSE_sub1_marks;
        cout << "Enter marks for subject 2:" << endl;
        cin >> CSE_sub2_marks;
        cout << "Enter marks for subject 3:" << endl;
        cin >> CSE_sub3_marks;
    }

    void display() {
        cout << "Data of this student of CSE is: " << endl << name << endl << branch_number << endl << CSE_sub1_marks
             << " " << CSE_sub2_marks << " " << CSE_sub3_marks << endl;
    }
};

class ECE : public student {
public:
    int ECE_sub1_marks;
    int ECE_sub2_marks;
    int ECE_sub3_marks;

    void setdata() {
        branch_number = 2;
        cout << "Enter name of student" << endl;
        getline(cin, name);
        cout << "Enter marks for subject 1:" << endl;
        cin >> ECE_sub1_marks;
        cout << "Enter marks for subject 2:" << endl;
        cin >> ECE_sub2_marks;
        cout << "Enter marks for subject 3:" << endl;
        cin >> ECE_sub3_marks;
    }

    void display() {
        cout << "Data of this student of ECE is: " << endl << name << endl << branch_number << endl << ECE_sub1_marks
             << " " << ECE_sub2_marks << " " << ECE_sub3_marks << endl;
    }
};

///question2
class Student {
public:
    friend class Administration;

    char name[100];
    int rollno;

    void print() const {
        cout << "Student's name is :" << name << "and roll no is :" << rollno << endl;
    }
};

class T1T2T3 : public Student {
public:
    int T1_marks;
    int T2_marks;
    int T3_marks;

    void print() const {
        cout << "Marks obtained in T1,T2 and T3 are as follows:" << T1_marks << " " << T2_marks << "" << T3_marks
             << endl;
    }
};

class P1P2 : public Student {
public:
    int P1_marks;
    int P2_marks;

    void print() const {
        cout << "Marks obtained in P1 and P2 are as follows:" << P1_marks << " " << P2_marks << endl;
    }
};

class Attendance : public Student {
public:
    float attendance_perc;

    void print() const {
        cout << "Attendance of the student in theory class is:" << attendance_perc << "%" << endl;
    }
};

class Total : public T1T2T3, public P1P2, public Attendance {
public:
    friend class Faculty;

    friend class Administration;

    int total_marks;
    char grade;

    void print() const {
        cout << "The total marks secured by student is:" << total_marks << "and grade so obtained is:" << grade << endl;
    }
};

class Faculty {
public:
    void setvalues(Total &obj) {
        cout << "Enter marks obtained by student in T1,T2 and T3 respectively out of 100:" << endl;
        cin >> obj.T1_marks >> obj.T2_marks >> obj.T3_marks;
        cout << "Enter marks for P1 and P2 respectively out of 100:" << endl;
        cin >> obj.P1_marks >> obj.P2_marks;
        cout << "Enter attendance of Student:" << endl;
        cin >> obj.attendance_perc;
        cout << "Data set successfully by faculty member!!" << endl;
    }
};

class Administration {
public:
    void setvalue(Student &obj) {
        cout << "Enter name and roll number of the student:" << endl;
        cin >> obj.name >> obj.rollno;
        cout << "Data set successfully by Administrator" << endl;
    }

    void result(Total &ob) {
        ob.total_marks = ob.T1_marks + ob.T2_marks + ob.T3_marks + ob.P1_marks + ob.P2_marks;
        if (ob.total_marks > 400) {
            ob.grade = 'A';
        } else if (ob.total_marks > 350 && ob.total_marks <= 400) {
            ob.grade = 'B';
        } else if (ob.total_marks > 300 && ob.total_marks <= 350) {
            ob.grade = 'C';
        } else if (ob.total_marks >= 250 && ob.total_marks <= 300) {
            ob.grade = 'D';
        } else if (ob.total_marks < 250) {
            ob.grade = 'F';
        } else {
            cout << "Total marks for student is invalid!!" << endl;
        }
    }
};

//question3
class Landline {
protected:
    string sub_name;
    long sub_number;
public:
    void call(long sub_number) {
        cout << "Calling on " << sub_number << endl;
    }

    void recieve() {
        cout << "Call recieved" << endl;
    }
};

class Mobile : public Landline {
    string phonebook[100][2];
    long ld[20];

public:

    void pbook(int n) {
        for (int i = 0; i < n; i++) {
            cout << "Enter name and number to be added" << endl;
            cin >> phonebook[i][0];
            cin >> phonebook[i][1];
        }
    }

    void call(string sub_name) {
        for (int j = 0; j < 100; j++) {
            if (sub_name == phonebook[j][0]) {
                Landline::call(stoi(phonebook[j][1]));
                lastdialed(stoi(phonebook[j][1]));
            }

        }
    }

    static int i;

    void lastdialed(long n) {

        if (i < 20) {
            ld[i] = n;
            i++;

        }
        if (i == 20) {
            for (int i = 1; i < 20; i++) {
                ld[i - 1] = ld[i];
            }
            ld[19] = n;
        }
    }

    void callfromdialed() {
        cout << "The last dialed numbers are " << endl;
        for (int j = i - 1; j >= 0; j++) {
            cout << (i - j) << ". " << ld[j] << endl;
        }
        int n;
        cout << "Choose(1-" << i << ")" << endl;
        cin >> n;
        Landline::call(ld[i - n]);
    }
};

int Mobile::i = 0;

int main() {
    int choice;
    cout << "Enter question number:" << endl;
    cin >> choice;
    switch (choice) {

        case 1: {
            CSE c1, c2;
            ECE e1, e2, e3;
            c1.setdata();
            c2.setdata();
            e1.setdata();
            e2.setdata();
            e3.setdata();
            c1.display();
            c2.display();
            e1.display();
            e2.display();
            e3.display();
            break;
        }
        case 2: {

            break;
        }
        case 3: {
            string s;
            Mobile m;
            int n;
            cout << "Enter the number of contacts to be added to the phonebook:" << endl;
            cin >> n;
            m.pbook(n);
            while (1) {
                int a;
                cout << "1. Dial from phonebook" << endl << "2. Dial from last dialed list" << endl << "3. Exit"
                     << endl;
                cin >> a;
                switch (a) {
                    case 1: {
                        cout << "Enter the name to call:" << endl;
                        cin >> s;
                        m.call(s);
                        break;
                    }
                    case 2: {
                        m.callfromdialed();
                        break;
                    }
                    case 3: {
                        cout << "Exiting program!!" << endl;
                        exit(0);
                    }
                    default: {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
        }


        default: {
            cout << "Enter proper question number!!" << endl;
            exit(0);
        }

    }
    return 0;
}