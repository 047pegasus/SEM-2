#include <iostream>

using namespace std;

class distance1{

    int feet,inch;

public:
    distance1(){
    feet=0;
    inch=0;
    }

    distance1(int f,int i){
    feet=f;
    inch=i;
    if(inch>=12){
        f++;
        inch=0;
    }
    else{
    }
    }

    void display(){
        cout<<"The distance is:"<<feet<<"feet and "<<inch<<"inches."<<endl;
    }

    distance1 operator + (distance1 &obj){
        distance1 oba;
        oba.feet= feet+obj.feet;
        oba.inch= inch+obj.inch;
        return oba;
    }

    distance1 operator - (distance1 &obj){
        distance1 obs;
        obs.feet= feet+obj.feet;
        obs.inch= inch+obj.inch;
        return obs;
    }

    bool operator > (distance1 &obj){
        if(feet>obj.feet){
                cout<<"Object 1 has greater distance in feet!"<<endl;
                return 1;
        }
        else{
                cout<<"Object 2 has greater distance in feet!"<<endl;
                return 0;
        }
    }

    bool operator < (distance1 &obj){
        if(feet<obj.feet){
                cout<<"Object 1 has lesser distance in feet!"<<endl;
                return 1;
        }
        else{
                cout<<"Object 2 has lesser distance in feet!"<<endl;
                return 0;
        }
    }

    //void operator +=(distance1 &obj){

    //}

    //void operator -=(distance1 &obj){

    //}

};

class rational{
    int num;
    int den;
public:
    rational(){
     num=1;
     den =1;
    }

    rational(int n, int d){
     num=n;
     den=d;
    }

    void setdata(){
    cout<<"Enter a value for fractions numerator:"<<endl;
    cin>>num;
    cout<<"Enter a value for fractions denominator:"<<endl;
    cin>>den;
    if(den==0){
        cout<<"FRACTION INVALID!!\n Enter Denominator again:"<<endl;
        cin>>den;
    }
    else{
        cout<<"Fraction entered successfully!"<<endl;
    }
  }

  void display()const{
  cout<<"Entered fraction is:"<<num<<"|"<<den<<endl;
  }

  rational operator +(rational obj){
    int sum_num= (this->num * obj.den)+ (obj.num * this->den);
    int sum_den= (this->den * obj.den);
    cout<<"The sum of these fractions is:"<<sum_num<<"|"<<sum_den<<endl;
    return rational(sum_num,sum_den);
  }

  rational operator -(rational obj){
    int dif_num= (this->num * obj.den)- (obj.num * this->den);
    int dif_den= (this->den * obj.den);
    cout<<"The difference of these fractions is:"<<dif_num<<"|"<<dif_den<<endl;
    return rational(dif_num,dif_den);
  }

  rational operator *(rational obj){
    int pro_num= (this->num * obj.num);
    int pro_den= (this->den * obj.den);
    cout<<"The product of these fractions is:"<<pro_num<<"|"<<pro_den<<endl;
    return rational(pro_num,pro_den);
  }

  rational operator /(rational obj){
    int div_num= (this->num * obj.den);
    int div_den= (obj.num * this->den);
    cout<<"The division result of these fractions is:"<<div_num<<"|"<<div_den<<endl;
    return rational(div_num,div_den);
  }


};

int main()
{   int q=0;
    cout<<"ENTER QUESTION NUMBER:"<<endl;
    cin>>q;
    switch(q){
        case 1: {
                distance1 d1(5,5);
                distance1 d2(5,3);
                distance1 da = d1 + d2;
                distance1 ds = d1 - d2;
                da.display();
                ds.display();

                if(d1 > d2){
                    cout<<"The distance d1 is greater than d2!"<<endl;
                }
                else{
                    cout<<"The distance d2 is greater than d1!"<<endl;
                }

                if(d1 < d2){
                    cout<<"The distance d1 is lesser than d2!"<<endl;
                }
                else{
                    cout<<"The distance d2 is lesser than d1!"<<endl;
                }

                break;
                }
        case 2: {   rational r1;
                    r1.setdata();
                    r1.display();
                    rational r2;
                    r2.setdata();
                    r2.display();
                    rational r3;
                    r3=r1+r2;
                    r3=r1-r2;
                    r3=r1*r2;
                    r3=r1*r2;
                break;
                }
        case 3: {

                break;
                }
        default: cout<<"Enter correct question number!!"<<endl;
                break;
    }

    return 0;
}
