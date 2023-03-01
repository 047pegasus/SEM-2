#include<iostream>
#include<random>
#include<time.h>
using namespace std;

//QUESTION 1
struct phone{
int area;
int exchange;
int number;
};
//QUESTION 2
struct date{
int day;
int month;
int year;
};

//QUESTION 3
long int hms_to_secs(int hours,int minutes,int seconds ){
long int hrtemp=hours*60*60;
long int mintemp=minutes*60;
long int sec= seconds+hrtemp+mintemp;
return sec;
}
//QUESTION 4
int flip(){
    float toss=0;
    int output=0;
    srand((unsigned)time(NULL));
    for(int i=1;i<=100;i++)
    {  toss=(float)rand()/RAND_MAX;
        cout<<toss<<endl;
        if(toss>0.5){
        output=1;
        }
        else{
        output=0;
        }
    }
return output;
}

int main(){
int opt=0;
A:
cout<<"Enter question number:"<<endl;
cin>>opt;
switch(opt){
case 1: {
        struct phone p1,p2;
        p1.area=212;
        p1.exchange=767;
        p1.number=8900;
        cout<<"Enter your area code,exchange and number:"<<endl;
        cin>>p2.area;
        cin>>p2.exchange;
        cin>>p2.number;
        cout<<"My phone number is :("<<p1.area<<")"<<p1.exchange<<"-"<<p1.number<<endl;
        cout<<"Your phone number is :("<<p2.area<<")"<<p2.exchange<<"-"<<p2.number<<endl;
        break;}
case 2: {
        struct date d1;
        cout<<"Enter date in format of dd/mm/yyyy:"<<endl;
        cin>>d1.day>>d1.month>>d1.year;
        cout<<"Date entered is :"<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;
        break;
        }
case 3: {
        int h,m,s;
        cout<<"Enter time in format HH:MM:SS"<<endl;
        cin>>h>>m>>s;
        long int out=hms_to_secs(h,m,s);
        cout<<"Entered time has: "<<out<<" seconds."<<endl;
        break;
        }
case 4: {
        int countheads=0,counttails=0;
        int temp=0;
        for(int i=0;i<=100;i++){
                temp=flip();
                if(temp==1){
                    countheads++;
                }
                else if(temp==0){
                    counttails++;
                }
                else{
                }
            }
        cout<<"No of times heads occurred is: "<<countheads<<" and no of times tails occurred is: "<<counttails<<endl;
        break;
        }
case 5: {   int level=0;
            cout<<"Enter level to play for:"<<endl;
            cin>>level;
            int lower=0,upper=0;
            switch(level){
            case 1: { lower=1;
                     upper=9;
                    break;
                    }
            case 2 :{ lower=10;
                     upper=99;
                    break;
                    }
            case 3: { lower=100;
                     upper=999;
                    break;
                    }
            default:{ lower=1;
                     upper=9;
                    break;
                    }
            }

            S:
            srand((unsigned)time(NULL));
            int a=lower+(rand()%upper);
            cout<<a<<endl;
            int b=lower+(rand()%upper);
            cout<<b<<endl;
            int ans=0;
            int count=0;
            int cor=0;
            do{
            B:
            cout<<"How much is "<<a<<"times"<<b<<"?"<<endl;
            cin>>ans;
            if(ans==a*b){
                    int correct=1+(rand()%4);
                switch(correct){
                case 1:cout<<"very Good!"<<endl;
                        a=lower+(rand()%upper);
                        b=lower+(rand()%upper);
                        count++;
                        cor++;
                        break;
                case 2:cout<<"Excellent!!"<<endl;
                        a=lower+(rand()%upper);
                        b=lower+(rand()%upper);
                        cor++;
                        count++;
                        break;
                case 3:cout<<"Nice Work!!"<<endl;
                        a=lower+(rand()%upper);
                        b=lower+(rand()%upper);
                        cor++;
                        count++;
                        break;
                case 4:cout<<"Keep up the good work!!"<<endl;
                        a=lower+(rand()%upper);
                        b=lower+(rand()%upper);
                        cor++;
                        count++;
                        break;
                default:cout<<"Very Good!!"<<endl;
                        a=lower+(rand()%upper);
                        b=lower+(rand()%upper);
                        cor++;
                        count++;
                        break;
                }
                }
            else{
                int incorrect=1+(rand()%4);
                switch(incorrect){
                case 1:cout<<"No. Please try again!!"<<endl;
                        count++;
                        goto B;
                        break;
                case 2:cout<<"Wrong try once more!"<<endl;
                        count++;
                        goto B;
                        break;
                case 3:cout<<"Don't give up!!"<<endl;
                        count++;
                        goto B;
                        break;
                case 4:cout<<"No. Keep trying!!"<<endl;
                        count++;
                        goto B;
                        break;
                default:cout<<"No. Please try again!!"<<endl;
                        count++;
                        goto B;
                        break;
                }
            }
            }while(count!=10);

            if(((cor/10)*100)>=75){
                       cout<<"Congratulations!! You are ready for the next level!"<<endl;
                        goto S;
                        break;
             }
            else{
                    cout<<"Please ask your teacher for more help!!"<<endl;
                }
        break;
        }
default:cout<<"Please enter a correct question number between 1 to 5!!"<<endl;
        goto A;
        break;
}
return 0;
}
