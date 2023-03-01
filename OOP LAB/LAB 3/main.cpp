#include <iostream>
#include <stdlib.h>
#include <random>
#include<time.h>
using namespace std;

//QUESTION 1
int question1(int &x,int &y){
int temp=x;
x=y;
y=temp;
return 0;
}

//QUESTION 2
void minmax(int array[],int length,int &minq,int &maxq)
{
maxq=array[0];
for(int i=0;i<=length;i++){
 if(array[i]>(maxq)){
    maxq=array[i];
 }
}
minq=array[0];
for(int i=0;i<=length;i++){
    if(array[i]<(minq)){
        minq=array[i];
    }
}
}

//QUESTION 3
int add(int &a,int &b,int &c,int &d)
{
    int r_nm,r_dnm=0;
    r_nm=(a*d)+(b*c);
    r_dnm=(b*d);
    cout<<"RESULT:"<<r_nm<<"/"<<r_dnm<<endl;
    return 0;
}
int sub(int &a,int &b,int &c,int &d)
{
    int r_nm,r_dnm=0;
    r_nm=(a*d)-(b*c);
    r_dnm=(b*d);
    cout<<"RESULT:"<<r_nm<<"/"<<r_dnm<<endl;
    return 0;
}
int mult(int &a,int &b,int &c,int &d)
{
    int r_nm,r_dnm=0;
    r_nm=(a*c);
    r_dnm=(b*d);
    cout<<"RESULT:"<<r_nm<<"/"<<r_dnm<<endl;
    return 0;
}
int div(int &a,int &b,int &c,int &d)
{
    int r_nm,r_dnm=0;
    r_nm=(a*d);
    r_dnm=(b*c);
    cout<<"RESULT:"<<r_nm<<"/"<<r_dnm<<endl;
    return 0;
}

//QUESTION 4
class rectangle{
    float length,width=0;
    public:
        void insertdataset(float l,float w){
        length=l;
        width=w;
        }
        void peri(){
            float p=(2*length)+(2*width);
            cout<<"The value of perimeter of the given rectangular dimensions will be:"<<p<<endl;
        }

        void area(){
            float ar=(length*width);
            cout<<"The value of area of the given rectangular dimensions will be:"<<ar<<endl;
        }
};
//QUESTION 5
void question5(string mv_name, int runtime=90){
    cout<<"The movie "<<mv_name<<"is of "<<runtime<<"minutes"<<endl;
}
//QUESTION 6
class shirt{
    public:
    float collarSize=0;
    float sleeveLength=0;
    void sh_ins();
};
void shirt::sh_ins(){
cout<<"ENTER THE SHIRT COLLAR SIZE:"<<endl;
cin>>collarSize;
cout<<"ENTER THE SHIRT SLEEVE LENGTH:"<<endl;
cin>>sleeveLength;
}

class pants{
    public:
    float waistSize=0;
    float inSeam=0;
    void pt_ins();
};
void pants::pt_ins(){
cout<<"ENTER THE PANT WAIST SIZE:"<<endl;
cin>>waistSize;
cout<<"ENTER THE PANT INSEAM LENGTH:"<<endl;
cin>>inSeam;
}

void displayClothingfacts(shirt obj_s){
    cout<<"The collar size of the shirt is:"<<obj_s.collarSize<<endl;
    cout<<"The sleeve length of the shirt is:"<<obj_s.sleeveLength<<endl;
}

void displayClothingfacts(pants obj_p){
    cout<<"The waist size of the pant is:"<<obj_p.waistSize<<endl;
    cout<<"The inseam length of the pant is:"<<obj_p.inSeam<<endl;
}

//QUESTION7
class movie{
    string title;
    string nameDirector;
    int year;
    public:
    void setTitle(string);
    void setYear(int);
    void setDirector(string);
    void movieDisplay();
}typedef myFavoriteMovie,mov;

void movie::setTitle(string t){
 cin>>title;
}

void movie::setYear(int y){
cin>>year;
}

void movie::setDirector(string d){
cin>>nameDirector;
}

void movie::movieDisplay(){
    cout<<"The Title of the movie is:"<<title<<endl;
    cout<<"The Director of the movie is:"<<nameDirector<<endl;
    cout<<"The Release Year of the movie is:"<<year<<endl;
}

//QUESTION 8
class order{
    public:
    int tabno=0;
    string svname;
    int pat=0;
    static float minchg;
    public:
     static float print(){
        return minchg;
     }
};

float order::minchg=4.75;

//ADVANCED PRACTISE PROBLEM QUESTION 1
struct vehicle{
    int year=0;
    int quantity=0;
    string mat[3]={"STEEL","IRON","ALUMINIUM"};
    char serial[3]={'A','A','0'};
};


//DRIVER MAIN CODE
int main()
{   int input;
    cout<<"PLEASE ENTER A CHOICE TO RUN A PROGRAM:"<<endl<<"1.QUESTION 1"<<endl<<"2.QUESTION 2"<<endl<<"3.QUESTION 3"<<endl<<"4.QUESTION 4"<<endl<<"5.QUESTION 5"<<endl<<"6.QUESTION 6"<<endl<<"7.QUESTION 7"<<endl<<"8.QUESTION 8"<<endl<<"9.ADVANCED QUESTION 1"<<endl;
    cin>>input;
    switch(input){

   case 1: //QUESTION 1
        {
        int x,y;
        cout<<"ENTER X AND Y:";
        cin>>x>>y;
        question1(x,y);
        cout<<"SWAPPED X:"<<x<<endl<<"SWAPPED Y:"<<y<<endl;
        break;
        }

    case 2://QUESTION 2
        {
        int len,minq,maxq=0;
        cout<<"Enter an array of integers..\n";
        cout<<"Enter the array size first:";
        cin>>len;
        int *n= new int[len];
        for(int i=0;i<=len;i++){
        cout<<"Enter element at position"<<i<<":\n";
        cin>>n[i];
        }
        minmax(n,len,minq,maxq);
        cout<<"The maximum value in the array is:"<<maxq;
        cout<<"The minimum values is the array is:"<<minq;
        break;
        }

    case 3: //QUESTION 3
        {
        int a,b,c,d,ops=0;
        cout<<"Enter the first fraction numerator(A):";
        cin>>a;
        cout<<"Enter the first fraction denominator(B):";
        cin>>b;
        cout<<"Enter the second fraction numerator(C):";
        cin>>c;
        cout<<"Enter the second fraction denominator(D):";
        cin>>d;
        cout<<"1. ADDITION"<<endl<<"2. SUBSTRACTION"<<endl<<"3. MULTIPLICATION"<<endl<<"4. DIVISION"<<endl;
        cin>>ops;
        switch(ops){
            case 1: add(a,b,c,d);
            break;
            case 2: sub(a,b,c,d);
            break;
            case 3: mult(a,b,c,d);
            break;
            case 4: div(a,b,c,d);
            break;
            default: cout<<"ERROR!! Enter a correct menu item.."<<endl;
            break;
        }
        break;
        }

    case 4://QUESTION 4
        {
        rectangle rec;
        float length,width;
        cout<<"Enter the value of length of the rectangle:"<<endl;
        cin>>length;
        cout<<"Enter the value of width of the rectangle:"<<endl;
        cin>>width;
        rec.insertdataset(length,width);
        rec.peri();
        rec.area();
        break;
        }

    case 5://QUESTION 5
        {
        string mv;
        int rntm=0;
        cout<<"Enter the movie name:"<<endl;
        cin>>mv;
        cout<<"Enter the running time in minutes:"<<endl;
        cin>>rntm;
        question5(mv,rntm);
        question5(mv);
        break;
        }

    case 6: //QUESTION 6
        {
        shirt s;
        s.sh_ins();
        pants p;
        p.pt_ins();
        displayClothingfacts(s);
        displayClothingfacts(p);
        break;
        }

    case 7://QUESTION 7
        {
        movie myFavoriteMovie;
        string temp;
        int y_temp;
        cout<<"Enter the movie title:"<<endl;
        cin>>temp;
        myFavoriteMovie.setTitle(temp);
        cout<<"Enter the movie release year:"<<endl;
        cin>>y_temp;
        myFavoriteMovie.setYear(y_temp);
        cout<<"Enter the Director of the movie:"<<endl;
        cin>>temp;
        myFavoriteMovie.setDirector(temp);
        myFavoriteMovie.movieDisplay();
        break;
        }

    case 8://QUESTION 8
        {
        float res=order::print();
        cout<<"The minimum charges for a table is:"<<res<<endl;
        break;
        }

    case 9: //ADVANCED PROBLEMS QUESTION 1
        {
        struct vehicle vhec[61];
        srand((unsigned)time(NULL));
        for(int i=1;i<=60;i++){
        vhec[i].year= 1990+(rand()%28);
        vhec[i].quantity= 1+(rand()%1000);
        static int j=0;
        switch(i){
            case 1 ... 10:vhec[i].serial[0]=vhec[i].serial[1]='A';
                            if(j<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + j;
                                j++;
                            }
                            break;
            case 11 ... 20:vhec[i].serial[0]=vhec[i].serial[1]='B';
                            static int j=0;
                            if(j<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + j;
                                j++;
                            }
                            break;
            case 21 ... 30:vhec[i].serial[0]=vhec[i].serial[1]='C';
                            static int k=0;
                            if(k<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + k;
                                k++;
                            }
                            break;
            case 31 ... 40:vhec[i].serial[0]=vhec[i].serial[1]='D';
                            static int l=0;
                            if(l<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + l;
                                l++;
                            }
                            break;
            case 41 ... 50:vhec[i].serial[0]=vhec[i].serial[1]='E';
                            static int m=0;
                            if(m<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + m;
                                m++;
                            }
                            break;
            case 51 ... 60:vhec[i].serial[0]=vhec[i].serial[1]='F';
                            static int n=0;
                            if(n<=9){
                                vhec[i].serial[2]=(vhec[i].serial[2]) + n;
                                n++;
                            }
                            break;
            default: cout<<"Hello world!!";
                            break;

            }
        }
        for(int x=1;x<61;x++){
        cout<<"The vehicle no is:"<<x<<endl;
        cout<<"The vehicle's serial no is:"<<vhec[x].serial<<endl;
        cout<<"The vehicle's year of manufacture is: "<<vhec[x].year<<endl;
        cout<<"The vehicle's quantity is :"<<vhec[x].quantity<<endl;
        cout<<"The vehicle's material is :"<<vhec[x].mat[0+(rand()%2)]<<endl;
        cout<<endl;
        }

       //REVERSE SEARCH
    string range_l;
    string range_u;
    cout<<"ENTER A RANGE TO REVERSE SEARCH FOR:"<<endl;
    cout<<"ENTER LOWER RANGE LIMIT:"<<endl;
    cin>>range_l;
    cout<<"ENTER UPPER RANGE LIMIT:"<<endl;
    cin>>range_u;
    int l_f=range_l[0];
    int l_l=range_l[2];
    l_l=l_l-'0';
    int u_f=range_u[0];
    int u_l=range_u[2];
    u_l=u_l-'0';
    for(char z=l_f;z<=u_f;z++){
            cout<<"The vehicle no is:"<<l_l+1<<endl;
            cout<<"The vehicle's serial no is:"<<vhec[l_l+1].serial<<endl;
            cout<<"The vehicle's year of manufacture is: "<<vhec[l_l+1].year<<endl;
            cout<<"The vehicle's quantity is :"<<vhec[l_l+1].quantity<<endl;
            cout<<"The vehicle's material is :"<<vhec[l_l+1].mat[0+(rand()%2)]<<endl;
            cout<<endl;
            if(l_l+1<=9)
            {l_l++;
            }
            else if(l_l>9){
            l_l=0;
            }
            else{
            }
        }
    break;
    }
   default: cout<<"PLease enter a proper question number!!"<<endl;
    }
return 0;
}
