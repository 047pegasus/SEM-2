#include <iostream>

using namespace std;

//QUESTION 1
class complex{
    int real;
    int img;

 public:

    void sum(complex,complex);
    void display();
    complex(){
        complex c1,c2,c3;
    }
    complex(int init){
        real=init;
        img=init;
    }
    complex(int RL, int IMG){
        real=RL;
        img=IMG;
    }
};

void complex::sum(complex a,complex b){
    real=a.real + b.real;
    img=a.img + b.img;
    cout<<"The sum of these complex numbers is:"<<real<<"+i"<<img<<endl;
}
void complex::display(){
    cout<<"The complex number for selected object entered is:"<<real<<"+i"<<img<<endl;
}


//QUESTION 2
class cartesian{
    int x,y;
 public:
     cartesian(){
     cout<<"Cartesian Constructor 1 called"<<endl;
     x=0;
     y=0;
     }
    cartesian(int a,int b){
        cout<<"Cartesian Constructor 2 called"<<endl;
        x=a;
        y=b;
    }
    ~cartesian(){
        cout<<"Cartesian class Destructor Called!!"<<endl;
    }
};

class rectangle{
    int tp1,tp2,bt1,bt2;
 public:
    rectangle(int tp1,int tp2,int bt1,int bt2){
        cout<<"Rectangle Constructor 1 called"<<endl;
        cartesian p1(tp1,tp2);
        cartesian p2(bt1,bt2);
        cout<<"TOP coordinates:"<<tp1<<tp2<<endl;
        cout<<"BOTTOM coordinates:"<<bt1<<bt2<<endl;
    }
    ~rectangle(){
        cout<<"Rectangle class Destructor Called!!"<<endl;
    }

};

//QUESTION 3
class question3{
    int i,j;
 public:
    void setdata();
    void displaydata();
    question3(){
        cout<<"Constructor for global obj called!"<<endl;
        i=1;j=1;
        cout<<"i="<<i<<"j="<<j<<endl;
    }
    ~question3(){
        cout<<"Destructor for global obj called !!"<<endl;
        i=0;j=0;
        cout<<"i="<<i<<"j="<<j<<endl;
    }

};
void question3::setdata(){
    cout<<"Enter value for i and j:"<<endl;
    cin>>i>>j;
}
void question3::displaydata(){
    cout<<"i and j :"<<i<<"  "<<j<<endl;
}

question3 q1;

//QUESTION 4
class question4{
    float l;
 public:
    question4(){
        cout<<"First Constructor called!!"<<endl;
        l=1;
    }
    question4(int t){
        cout<<"Second Constructor called!!"<<endl;
        l=t;
    }
    question4(float x){
        cout<<"Third Constructor called!!"<<endl;
        l=x;
    }
    question4(int x,int y=2){
        cout<<"Fourth Constructor called!!"<<endl;
        l=x+y;
    }
    void displaydata();
};
void question4::displaydata(){
cout<<"Value of l after constructor call is: "<<l<<endl;
}

int main()
{
    int r=0;
    cout<<"Enter a question number to run:"<<endl<<"Question 1"<<endl<<"Question 2"<<endl<<"Question 3"<<endl<<"Question 4"<<endl;
    cin>>r;
    switch(r){
        case 1: {   complex c1(3);
                    complex c2(2,4);
                    c1.display();
                    c2.display();
                    complex c3(0);
                    c3.sum(c1,c2);
                break;
                }
        case 2: {  rectangle r1(2,3,4,1);
                break;
                }
        case 3: {   q1.displaydata();
                    q1.setdata();
                    break;
                }
        case 4: {  question4 q;
                    q.displaydata();
                    //question4 w(5);  //Error causing even when default parameter exists!!
                    //w.displaydata();
                    question4 e((float)4.9);
                    e.displaydata();
                    question4 f(3,8);
                    e.displaydata();
                break;
                }
        default: { cout<<"Enter a proper question number!!"<<endl;
                break;
                }
    }
    return 0;
}
