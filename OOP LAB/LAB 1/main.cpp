//*************************************************************
//This lab program file (Lab-1) is developed by Tanishq Agarwal (Er. No:211B326)

//*************************************************************

#include <iostream>
#include<stdlib.h>
#include <math.h>
#include <string.h>
#include <iomanip>
#define q3 cout<<"Hello JUET!!"

using namespace std;

//FUNCTIONS

int digitcount(){
       int n;
    int count=0;
    cout<<"Please enter the number whose digits are to be counted:";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"The number of digits in the given number is equal to:"<<count;
    return 0;

}
int factorial(int num)
{
int fact=1;
    if(num!=0){
		fact=num*factorial(num-1);
    }
	else{
	fact= fact*1;
    return fact;
    }
    return fact;
}
int question3(){
if(q3){

}
return 0;
}
int question4(){
if(cout<<"Hello JUET!"){

}
return 0;
}
int question5(){
int a,b,c=0;
cout<<"Enter the numbers A and B:";
cin>>a>>b;
for(int i=1;i<=a;i++){
    c=b*i;
    if(c>=a){
        cout<<"The multiple is:"<<c;
        break;
    }
    else{

    }
}
return 0;
}
int question6(){
float numf,sq;
int num,i=0;
int t1,t2=0;
int a[4];
cout<<"Enter the number u want to check\n";
cin>>numf;
sq=sqrt(numf);
num=sq;
if(num==sq){
    cout<<"The number entered is a perfect square number.\n";
    t1=1;
}
else{
        cout<<"The number entered is not a perfect square number.\n";
     t1=0;
}
for(i=0;i<=3;i++){
    a[i]=num%10;
    num=num/10;
}
for(i=3;i>=0;i--){
    a[3-i]=a[i];
}
if((a[0]==a[1]) && (a[2]==a[3])){
    cout<<"The number entered is symmetric.\n";
    t2=1;
}
else{
    cout<<"The number is asymmetric.\n";
    t2=0;
}
if(t1==1 && t2==1){
    cout<<"The number is of required type.\n";
}
else{
    cout<<"The number is not of required type..";
}
return 0;
}

int question7(){
    string ar;
    int count=0,i=0;
    cout<<"Please enter the array of characters into this array:";
    cin>>ar;
    while(ar[i]!='\0'){
        count++;
        i++;
    }
cout<<"The length of the string is: "<<count;
return 0;
}

int strcat(){
string a;
string b;
cout<<"Please enter the value of string A:";
cin>>a;
cout<<"Please enter the value of string B:";
cin>>b;
cout<<"The concatenated string is:"<< a + b;
return 0;
}
//Advanced Practice Problems
//QUESTION 1
int app1(){
    int n=0;
    cout<<"Please enter the no of characters in the array with the missing element:";
    cin>>n;
    int *a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<=n;i++){
        cout<<"Enter the value for position "<<i<<"in the array:\n";
        cin>>a[i];
    }
    for(int i=0;i<=n;i++){
        if(a[i+1]-a[i]==1){

             }
             else{
                    cout<<"The missing element is: "<<a[i]+1;
                    break;
             }
}
return 0;

}

//QUESTION 2

int strend(string s,string t)
{
int index=s.find(t);
int ls=s.length();
if(s.find(t)!= string::npos){
        if(index>(ls/2)){
         cout<<"1";
         }
else{
    cout<<"0";
}
}
return 0;
}

//DRIVER CODE

int main()
{   A:
    int men=0;
    int result=0;
    int n=0;
    string s1,s2;
    cout<<setw(50)<<"MENU DRIVEN PROGRAM!!\n";
    cout<<"1. QUESTION 1\n"<<"2. QUESTION 2\n"<<"3. QUESTION 3\n"<<"4. QUESTION 4\n"<<"5. QUESTION 5\n"<<"6. QUESTION 6\n"<<"7. QUESTION 7\n"<<"8. QUESTION 8\n";
    cout<<"Advanced Problems:\n"<<"9. QUESTION 1\n"<<"10. QUESTION 2\n"<<"11.EXIT \n";
    cin>>men;
    switch(men){
    case 1: digitcount();
                goto A;
              break;
    case 2: cout<<"Enter the number whose factorial is to be calculated:";
            cin>>n;
            result=factorial(n);
            cout<<"The factorial of "<<n<<" is: "<<result;
            goto A;
            break;
    case 3: question3();
            goto A;
            break;
    case 4: question4();
            goto A;
            break;
    case 5: question5();
            goto A;
            break;
    case 6: question6();
            goto A;
            break;
    case 7: question7();
            goto A;
            break;
    case 8: strcat();
            goto A;
            break;
    case 9: app1();
            goto A;
            break;
    case 10:  cout<<"Please enter the string s:";
              getline(cin,s1);
              cout<<"Please enter the string t:";
              getline(cin,s2);
              strend(s1,s2);
              goto A;
              break;
    case 11: break;
    default: cout<<"The entered menu element is out of range of the given menu of the program. Please enter a correct menu element:\n";
                break;
                goto A;
}
return 0;
}

