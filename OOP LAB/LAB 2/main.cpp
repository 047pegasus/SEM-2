//*************************************************************
//This program is developed by Tanishq Agarwal (Er. No:211B326)

//*************************************************************
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

using namespace std;

//QUESTION 1
void minmax(int array[],int length,int *minq,int *maxq){
*maxq=array[0];
for(int i=0;i<=length;i++){
 if(array[i]>(*maxq)){
    *maxq=array[i];
 }
}
*minq=array[0];
for(int i=0;i<=length;i++){
    if(array[i]<(*minq)){
        *minq=array[i];
    }
}
return ;
}

//QUESTION 2
int question2(int l,int u){
srand((unsigned)time(NULL));
for(int i=0;i<10;i++){
    int random = l + (rand()%((u-l)+1));
    cout<<random<<endl;
}
return 0;
}

//QUESTION 3
int question3(long double ar[],int sz){
long double ar2[sz];
int j=0;
for(j=0;j<sz;j++){
    ar2[j]=ar[sz-j];
}
for(j=0;j<sz;j++){
    cout<<"The element at the position "<<j<<" in the new array is:"<<ar2[j]<<"\n";
}
return 0;
}

//QUESTION 4
int question4(){
    int len=0;
    int i,j=0;
    cout<<"Enter the order of A and B matrix to be added:";
    cin>>len;
    int a[len][len];
    int b[len][len];
    int sum[len][len];
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            cout<<"Enter the value for A matrix at position A "<<"["<<i<<"]"<<" "<<"["<<j<<"]";
            cin>>a[i][j];
        }
    }

    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            cout<<"Enter the value for B matrix at position B "<<"["<<i<<"]"<<" "<<"["<<j<<"]";
            cin>>b[i][j];
        }
    }

    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
    }

    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
                cout<<"The value for SUM matrix at position SUM "<<"["<<i<<"]"<<" "<<"["<<j<<"]"<<"is:"<<sum[i][j]<<"\n";
            }
    }

return 0;
}

//Advanced Practice Problems QUESTION 1
int app1(){
int i,a,b,arcnt=0,ctr=0,maxo;
int count[10]={0,0,0,0,0,0,0,0,0,0};
int pn[10];
cout<<"Enter the values for upper limit and lower limit for check:";
cin>>a>>b;
for(i=a;i<=b;i++){
    for(int j=1;j<=b;j++){
        if(i%j==0){
            ctr++;
        }
    }
    if(ctr<=2){
        pn[arcnt]=i;
        arcnt++;
    }
    ctr=0;
}
for(i=0;i<arcnt;i++) {
    while(pn[i]>0) {
        count[pn[i]%10]++;
        pn[i]=pn[i]/10;
    }
}
maxo=count[0];
for(i=0;i<10;i++) {
    if(count[i]>maxo)
        maxo=count[i];
}
for(i=9;i>=0;i--) {
    if(count[i]==maxo) {
        cout << "Digit: " << i << endl;
        break;
    }
}
return 0;
}

//Main Function

int main()  //DRIVER CODE
{    cout<<"This is menu driven program for LAB 2 project\n";
    cout<<" 1. QUESTION 1\n 2. QUESTION 2\n 3. QUESTION 3\n 4. QUESTION 4\n 5. Advanced Problems QUESTION 1\n 6. EXIT\n";
    int opt,a,b=0;
    cout<<"Please enter your choice:";
    cin>>opt;
switch(opt){
    case 1: {
            int len,minq,maxq=0;
            cout<<"Enter an array of integers..\n";
            cout<<"Enter the array size first:";
            cin>>len;
            int *n= new int[len];
            for(int i=0;i<=len;i++){
                cout<<"Enter element at position"<<i<<":\n";
                cin>>n[i];
            }
            minmax(n,len,&minq,&maxq);
            cout<<"The maximum value in the array is:"<<maxq;
            cout<<"The minimum values is the array is:"<<minq;
            }
             break;

    case 2:cout<<"Set lower and upper limits of the random number generator profile:";
            cin>>a>>b;
            question2(a,b);
            break;
    case 3: {cout<<"Enter size of the long double array:";
            int sz=0;
            cin>>sz;
            long double *test=new long double[sz];
            for(int x=0;x<sz;x++){
                cout<<"Enter the value of original array for position "<<x<<"\n";
                cin>>test[x];
            }
            question3(test,sz);
            }
            break;
    case 4:question4();
             break;
    case 5:app1();
             break;
    case 6:break;
    default: cout<<"The key entered is incorrect..";
             break;
}
 return 0;
}

