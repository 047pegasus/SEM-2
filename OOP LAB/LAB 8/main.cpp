#include <iostream>

using namespace std;

class shape{
public:
    double x;
    double y;

    void get_data(){
    cout<<"Enter first dimension of figure accessed:"<<endl;
    cin>>x;
    cout<<"Enter second dimension of figure accessed:"<<endl;
    cin>>y;
    }

    virtual void display_area(){
        cout<<"Base class display_area() accessed!!"<<endl<<"No area can be presented for the base class!!"<<endl;
    }
    //virtual void display_area()= 0;

};

class triangle:public shape{
public:
    void display_area(){
        double areatr=0.5*x*y;
        cout<<"The area of triangle is:"<<areatr<<endl;
    }
};

class rectangle:public shape{
public:
    void display_area(){
        double arearec=x*y;
        cout<<"The area of rectangle is:"<<arearec<<endl;
    }
};

class circle:public shape{
public:
    void display_area(){
        if(y==x){
        double areacir=3.14*x*y;
        cout<<"The area of rectangle is:"<<areacir<<endl;
    }
    else{
        cout<<"Different values of radius detected!!"<<endl;
    }
    }
};

int main()
{
    shape *shptr;
    triangle tr;
    rectangle rec;
    circle cr;
    shptr = &tr;
    shptr->get_data();
    shptr->display_area();
    shptr=&rec;
    shptr->get_data();
    shptr->display_area();
    shptr= &cr;
    shptr->get_data();
    shptr->display_area();
    return 0;
}
