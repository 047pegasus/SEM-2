#include <iostream>

using namespace std;

//QUESTION 1
 class student{
 int roll=0;
 string name;
 public:
    student(){
        name="";
        roll++;
    }

    void datainsert(){
        cout<<"Enter the roll number:"<<endl;
        cin>>roll;
        cout<<"Enter name of student :"<<endl;
        cin>>name;
    }

    void studisplay() const{
        cout<<"Student's Name:"<<name<<endl<<"Student's roll number:"<<roll<<endl;
    }

 };

 class exam: public student{
public:
    int marks[6];
    void examinsert(){
        for(int i=0;i<6;i++){
            cout<<"Enter marks for subject "<<i<<endl;
            cin>>marks[i];
        }
    }
    void examdisplay()const{
        cout<<"Student's marks:"<<endl;
        for(int i=0;i<6;i++){
            cout<<"Marks for subject "<<i<<"are:"<<marks[i];
        }
    }
 };

 class result: public exam{
 int total_marks;
 public:
    void resultdisplay(){
        studisplay();
        examdisplay();
        for(int i=0;i<6;i++){
            total_marks+=marks[i];
        }
        cout<<"The total marks of the student is:"<<total_marks;
    }
 };

//QUESTION 2
 class Student{
 char school[100];
 char degree[100];
 public:
     void getdata(){
        cout<<"Enter the name of the School/University:"<<endl;
        cin>>school;
        cout<<"Enter the name of the highest degree obtained until now:"<<endl;
        cin>>degree;
     }

     void display()const{
        cout<<"The name of the School/University:"<<school<<endl;
        cout<<"The name of the highest degree obtained until now:"<<degree<<endl;
     }

 };

 class Employee{
 char empname[50];
 int empno;
 public:
        void getemp(){
            cout<<"Enter Employee's name:"<<endl;
            cin>>empname;
            cout<<"Enter employee number:"<<endl;
            cin>>empno;
        }

        void dispemp() const{
            cout<<"The name of the employee is: "<<empname<<"and the employee number is:"<<empno<<endl;
        }
 };

 class Manager: public Employee,public Student{
    string title;
    float dues;
    public:
        void getman(){
            cout<<"Enter the title of  the Manager:"<<endl;
            cin>>title;
            cout<<"Enter the amount of dues if any or enter zero:"<<endl;
            cin>>dues;
        }

        void mandisplay()const{
            display();
            dispemp();
            cout<<"The title of  the Manager:"<<title<<endl;
            cout<<"The amount of dues is:"<<dues<<endl;
        }

 };

 class Scientist: public Employee,public Student{
    int no_of_pub;
    public:
        void getsci(){
            cout<<"Enter the no of publications:"<<endl;
            cin>>no_of_pub;
        }

        void scidisplay()const{
            display();
            dispemp();
            cout<<"The no of publications by the scientist is:"<<no_of_pub<<endl;
        }
 };

 class Laborer: public Employee{
     char labname[100];
    public:
        void getlab(){
            cout<<"Enter the name of the laborer:"<<endl;
            cin>>labname;
        }

        void labdisplay()const{
            dispemp();
            cout<<"The name of teh laborer is:"<<labname<<endl;
        }
 };

//QUESTION 3
class mother{
    public:
    void display(){
        cout<<"Mother class invoked!!"<<endl;
    }
};

class daughter: public mother{
    public:
    void display(){
        cout<<"Daughter class invoked!!"<<endl;
    }
};

//QUESTION 4
class staff{
char code;
char name[50];
public:
    void getstaff(){
        cout<<"Enter the staff name:"<<endl;
        cin>>name;
        cout<<"Enter staff code:"<<endl;
        cin>>code;
    }
    void dispstaff(){
        cout<<"The staff name is:"<<name<<endl;
        cout<<"The staff code is :"<<code<<endl;
    }
};

class teacher:public staff{
char subject[20];
int publication;
public:
    void getteacher(){
        cout<<"Enter the teacher subject:"<<endl;
        cin>>subject;
        cout<<"Enter no of publications by the teacher:"<<endl;
        cin>>publication;
    }
    void showteacher(){
        cout<<"The teacher's subject is:"<<subject<<endl;
        cout<<"The no of publication by the teacher is :"<<publication<<endl;
    }
};

class typist:public staff{
float speed;
public:
    void gettypist(){
        cout<<"Enter the speed of the typist"<<endl;
        cin>>speed;
    }
    void showtypist(){
        cout<<"The speed of the typist is: "<<speed<<endl;
    }
};

class officer:public staff{
char grade[10];
public:
    void getofficer(){
        cout<<"Enter the grade of the ranking officer:"<<endl;
        cin>>grade;
    }
    void showofficer(){
        cout<<"The grade of the raking officer is: "<<grade<<endl;
    }
};

class regular:public typist{
    float wage;
public:
    void getregular(){
        cout<<"Enter the wage of the regular typist:"<<endl;
        cin>>wage;
    }
    void showregular(){
        cout<<"The daily wage of the regualr category typist is:"<<wage<<endl;
    }
};

class casual:public typist{
float daily_wages;
public:
    void getcasual(){
            cout<<"Enter daily wages of the casual typist :"<<endl;
            cin>>daily_wages;
    }
    void showcasual(){
            cout<<"The daily wages of the casual typist is:"<<daily_wages<<endl;
    }
};


int main()
{
    int choice=0;
    cout<<"Enter question number:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            student stuobj;
            stuobj.datainsert();
            exam exobj;
            exobj.examinsert();
            result resobj;
            resobj.resultdisplay();
        break;
        }

        case 2:{
                Student Stuobj;
                Stuobj.getdata();
                Employee empobj;
                empobj.getemp();
                Manager manobj;
                manobj.getman();
                Scientist sciobj;
                sciobj.getsci();
                Laborer labobj;
                labobj.getlab();
                manobj.mandisplay();
                sciobj.scidisplay();
                labobj.labdisplay();
        break;
        }

        case 3:{
                daughter dobj;
                dobj.display();
                dobj.mother::display();
        break;
        }

        case 4:{
                staff staffobj;
                staffobj.getstaff();
                teacher teachobj;
                teachobj.getteacher();
                typist typeobj; 
                typeobj.gettypist();
                officer offobj;
                offobj.getofficer();
                regular regobj;
                regobj.getregular(); 
                casual casobj;
                casobj.getcasual();
        break;
        }

        default:{cout<<"Enter correct question number:"<<endl;
        break;}
}

    return 0;
}
