#include <iostream>
#include <conio.h>

using namespace std;

//QUESTION 1
class student{
   public:
    int sub1=0,sub2=0,sub3=0;
    int rn=0;
    int total=0;
    void setdata(int roll,int sb1,int sb2,int sb3){
        rn=roll;
        sub1=sb1;
        sub2=sb2;
        sub3=sb3;
    }
    void totalmarks(student obj[],int sz){
        for(int i=0;i<sz;i++){
        obj[i].total=obj[i].sub1 + obj[i].sub2 + obj[i].sub3;
        cout<<"The total marks of student having roll no:"<<obj[i].rn<<"is:"<<obj[i].total<<endl;
        }
    }

    void highestmarks(student obj[],int sz){
        int high1=obj[0].sub1;
        int high2=obj[0].sub2;
        int high3=obj[0].sub3;
        int count=0;

        for(int i=0;i<sz;i++){
            if(high1 < obj[i].sub1){
            high1=obj[i].sub1;
            count++;
            }
            else{
            }
        }
        cout<<"The highest scoring student in subject 1 is roll no:"<<obj[count].rn<<endl;
        count=0;
        for(int i=0;i<sz;i++){
            if(high2 < obj[i].sub2){
            high2=obj[i].sub2;
            count++;
            }
            else{
            }
        }
        cout<<"The highest scoring student in subject 2 is roll no:"<<obj[count].rn<<endl;
        count=0;
        for(int i=0;i<sz;i++){
            if(high3 < obj[i].sub3){
            high3=obj[i].sub3;
            count++;
            }
            else{
            }
        }
        cout<<"The highest scoring student in subject 3 is roll no:"<<obj[count].rn<<endl;
        count=0;
    }

    void topper(student obj[],int sz){
        int top=obj[0].total;
        for(int i=0;i<sz;i++){
        if(top < obj[i].total){
            top=obj[i].total;
          }
        }
    }

};

//QUESTION 2
class bank{
    string name;
    int acno;
    string type;
    long int acbal;
public:
    void setdata(){
    acno=1;
    type="SAVINGS";
    acbal=0;
    }
    void deposit(bank obj[],int sz){
    int dep=0;
    for(int i=0;i<sz;i++){
    cout<<"Enter the name of bank account holder:"<<endl;
    cin>>obj[i].name;
    cout<<"Enter the account number of bank account holder:"<<endl;
    cin>>obj[i].acno;
    cout<<"Enter the type of bank account:"<<endl;
    cin>>obj[i].type;
    cout<<"Enter the amount to be deposited:"<<endl;
    cin>>dep;
    obj[i].acbal=obj[i].acbal+dep;
    cout<<"AMOUNT DEPOSITED SUCCESSFULLY AND BALANCE UPDATED!!"<<endl;
    }
    }

    void checkandwithdraw(bank obj[]){
    int tempacno=0,withdraw=0;
    char ch;
    cout<<"Enter the account number of which balance is to be checked:"<<endl;
    cin>>tempacno;
    cout<<"The account balance for given account number is:"<<obj[tempacno-1].acbal<<endl;
    A:
    cout<<"DO YOU WANT TO WITHDDRAW AMOUNT??"<<endl;
    cin>>ch;
    if(ch=='Y'|| ch=='y'){
            cout<<"Enter amount to withdraw:"<<endl;
            cin>>withdraw;
            cout<<"PROCESSING..."<<endl;
            obj[tempacno-1].acbal=obj[tempacno-1].acbal-withdraw;
            cout<<"WITHDRAWAL SUCCESSFUL!!"<<endl<<"NEW BALANCE IS:"<<obj[tempacno].acbal<<endl;
    }
    else if(ch=='N'||ch=='n'){
            cout<<"SURE!!";
            cout<<endl;
    }
    else{
        cout<<"Enter a correct character:"<<endl;
        goto A;
    }
    }

    void showdetails(bank obj[]){
    int tempacno;
    cout<<"Enter the account no for which details are required:"<<endl;
    cin>>tempacno;
    cout<<"The name of the requested user is:"<<obj[tempacno-1].name<<" "<<"and his/her account balance is:"<<obj[tempacno-1].acbal<<endl;
    }
};


//QUESTION 3
class DB;
class DM{
float met=0;
float cent=0;
friend float adddmdb(DM,DB);
public:
    void setdatadm(){
    cout<<"ENTER VALUE FOR METRES:"<<endl;
    cin>>met;
    cout<<"ENTER VALUE FOR CENTIMETRES:"<<endl;
    cin>>cent;
  }
};

class DB{
float feet=0;
float inches=0;
friend float adddmdb(DM,DB);
public:
    void setdatadb(){
    cout<<"ENTER VALUE FOR FEET:"<<endl;
    cin>>feet;
    cout<<"ENTER VALUE FOR INCHES:"<<endl;
    cin>>inches;
  }
};

float adddmdb(DM obj1,DB obj2){
    int inp=0;
    float res=0;
    cout<<"Input result format:"<<"1. METRES"<<endl<<"2. FOOT"<<endl<<"3. INCHES"<<endl<<"4.CENTIMETRES"<<endl;
    cin>>inp;
    switch(inp){
        case 1: res=(obj1.cent/100)+obj1.met+(obj2.feet*0.304)+(obj2.inches*0.0254);
                break;
        case 2: res=(obj1.cent*0.032)+(obj1.met*100*0.032)+obj2.feet+(obj2.inches*0.083);
                break;
        case 3: res=(obj1.met*39.36)+((obj1.cent/100)*39.36)+obj2.inches+(obj2.feet*12);
                break;
        case 4: res=obj1.cent+(obj1.met*100)+(obj2.feet*30.48)+(obj2.inches*2.54);
                break;
        default: cout<<"Input format correctly!"<<endl;
                break;
    }
return res;
}

//DRIVER MAIN() FUNCTION
int main()
{
    int cs=0;
    cout<<"Enter the number of question to run:"<<endl<<"1. QUESTION 1"<<endl<<"2. QUESTION 2"<<endl<<"3. QUESTION 3"<<endl;
    cin>>cs;
    switch(cs){
    case 1: {
            student s[10],s1;
            int subject1=0,subject2=0,subject3=0;
            for(int j=0;j<10;j++){
                    cout<<"Enter marks of subject 1 for student"<<j+1<<endl;
                    cin>>subject1;
                    cout<<"Enter marks of subject 2 for student"<<j+1<<endl;
                    cin>>subject2;
                    cout<<"Enter marks of subject 3 for student"<<j+1<<endl;
                    cin>>subject3;
                s[j].setdata(j+1,subject1,subject2,subject3);
            }
            cout<<"ALL DATA IS SET SUCCESSFULLY!!"<<endl;

            s1.totalmarks(s,10);
            s1.highestmarks(s,10);
            s1.topper(s,10);
            break;
            }
    case 2: {
            int usersize;
            cout<<"Enter number of users"<<endl;
            cin>>usersize;
            bank user[usersize],user1;
            user1.setdata();
            user1.deposit(user,usersize);
            user1.checkandwithdraw(user);
            user1.showdetails(user);
            break;
            }
    case 3: {DM d1;
            DB d2;
            d1.setdatadm();
            d2.setdatadb();
            float converted=adddmdb(d1,d2);
            cout<<"The required conversion is: "<<converted<<endl;
            break;
            }
    default: cout<<"PLease enter a correct question number!!"<<endl;
            break;
    }

    return 0;
}
