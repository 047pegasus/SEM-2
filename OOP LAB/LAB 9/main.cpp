#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter question number:"<<endl;
    cin>>choice;
    switch(choice){

        case 1:{ fstream fout;
                fout.open("TEXT.txt");
                if(fout.is_open()){
                fout<<"Hello"<<" "<<"1234"<<" "<<"!@#$%^&*()"<<endl;
                fout<<"My name is Tanishq Agarwal aka 047_Pegasus!!"<<endl;
                cout<<"Data Written successfully to the file!!"<<endl;
                }
                else{
                    cout<<"ERROR OPENING FILE TO WRITE DATA!!";
                    exit(0);
                }
                fout.close();
                fstream fin;
                fin.open("TEXT.txt");
                int nline=0;
                int nwords=0;
                int nchar=0;
                if(fin.is_open()){
                char line[100];
                if(fin.eof()!=1){
                        fin.getline(line,100);
                            for(int i=0;fin.eof()!=1;i++){
                                if(line[i]!=' ' && line[i]!='\n'){
                                    nchar++;
                                    }
                                else if(line[i]==' '){
                                    nwords++;
                                    }
                                else if(line[i]=='\n'){
                                    nline++;
                                    nwords++;
                                    }
                                else{

                                    }
                                }
                            }
                    cout<<"No of lines:"<<nline<<endl;
                    cout<<"No of words:"<<nwords<<endl;
                    cout<<"No of characters:"<<nchar<<endl;
                }


                else{
                            cout<<"ERROR OPENING FILE TO READ DATA!!";
                        exit(0);
                }
            fin.close();

                break;
            }

        case 2:{ char temp[500];
            int i=0;
            char ch;
            fstream fin;
            fin.open("MYFILE.txt");
            if(fin.good()){
                cout<<"The file is opened successfully!!"<<endl;
            }
            else{
                cout<<"FILE OPENING ERROR!!"<<endl;
                exit(0);
            }
            fin.seekg(0);
            while(fin.eof()!=1){
               fin.get(ch);
               temp[i]=ch;
               i++;
            }
            i=0;
            cout<<"The file content read is:"<<endl;
            while(temp[i]!='\0'){
                cout<<temp[i];
                i++;
            }
                break;
            }

        case 3:{    char c;
                    ifstream fin1;
                    fin1.open("FIRST.txt",ios::in);
                    fin1.seekg(0);
                    if(fin1.good()){
                        cout<<"FILE 1 OPENED SUCCESSFULLY FOR COPYING!!"<<endl;
                    }
                    else{
                        cout<<"ERROR OPENING COPYING FILE 1 !!"<<endl;
                        exit(0);
                    }

                    ofstream fin2;
                    fin2.open("SECOND.txt",ios::out);
                    fin2.seekp(0);
                    if(fin2.good()){
                        cout<<"FILE 2 OPENED SUCCESSFULLY FOR COPYING!!"<<endl;
                    }
                    else{
                        cout<<"ERROR OPENING COPYING FILE 2 !!"<<endl;
                        exit(0);
                    }

                    cout<<"Both files opened successfully!!"<<endl<<"Beginning Copying!!"<<endl;

                    while(fin1.eof()!=1){
                        fin1.get(c);
                        fin2<<c;
                    }
                    fin1.close();
                    fin2.close();
                    cout<<"Data copied Successfully!!"<<endl;

                break;
            }

        case 4:{    char chr;
                    ifstream f1;
                    f1.open("Q4FIRST.txt");
                    if(f1.good()){
                        cout<<"File 1 OPENED SUCCESSFULLY IN READ MODE!!"<<endl;
                    }
                    else{
                        cout<<"ERROR OPENING FILE 1!!"<<endl;
                        exit(0);
                    }

                    ifstream f2;
                    f2.open("Q4SECOND.txt");
                    if(f2.good()){
                        cout<<"File 2 OPENED SUCCESSFULLY IN READ MODE!!"<<endl;
                     }
                    else{
                        cout<<"ERROR OPENING FILE 2!!"<<endl;
                        exit(0);
                    }

                    ofstream f3;
                    f3.open("Q4THIRD.txt",ios::ate);
                    if(f3.good()){
                        cout<<"File 3 OPENED SUCCESSFULLY in WRITE MODE!!"<<endl;
                    }
                    else{
                        cout<<"ERROR OPENING FILE 3!!"<<endl;
                        exit(0);
                    }

                    while(f1.eof()!=1){
                        f1.get(chr);
                        f3<<chr;
                    }
                    f3.seekp(0,ios::end);
                    f3<<endl;
                    while (f2.eof()!=1){
                        f2.get(chr);
                        f3<<chr;
                    }

                    cout<<"Data merged and Copied to third file successfully!!"<<endl;

                    f1.close();
                    f2.close();
                    f3.close();
                break;
            }

        case 5:{ char echar;
                 char dchar;
                 char opt;
                 int r;
                 cout<<"Enter program in which mode:"<<"1:Encryption mode"<<endl<<"2.Decryption Mode"<<endl;
                 cin>>r;
                 if(r==1){
                    goto E;
                 }
                 else if(r==2){
                    goto D;
                 }
                 else{
                    cout<<"Enter a proper mode!";
                    exit(0);
                 }
                 E:{
                 fstream encrypt_fin;
                 encrypt_fin.open("SAMPLEQ5.txt");
                 if(encrypt_fin.good()){
                     cout<<"File opened successfully!!"<<endl<<"Encryption Operation started!!"<<endl;
                 }
                 else{
                     cout<<"File not found so not opened!! EXITING PROGRAM"<<endl;
                     exit(0);
                 }
                 while(encrypt_fin.eof()!=1){
                     encrypt_fin.get(echar);
                     if(echar==' '){
                         encrypt_fin.seekp(0,ios::cur);
                         encrypt_fin.put('$');
                     }
                     else if(echar>'b'&& echar<'x'){
                         encrypt_fin.seekp(0,ios::cur);
                         encrypt_fin.put((char)((int)echar+1));
                     }
                     else if(echar>'B'&& echar<'X'){
                         encrypt_fin.seekp(0,ios::cur);
                         encrypt_fin.put((char)((int)echar-1));
                     }
                     else if(echar>='2'&& echar<='7'){
                         encrypt_fin.seekp(0,ios::cur);
                         encrypt_fin.put(echar+1);
                     }
                     else{
                     }
                 }

                    encrypt_fin.close();
                 }
                 cout<<"File encrypted successfully!"<<endl<<"If u wish to decrypt it enter D or d:"<<endl;
                 cin>>opt;
                 if(opt=='d'||opt=='D'){
                        D:{
                     fstream decrypt_fin;
                     decrypt_fin.open("SAMPLEQ5.txt");
                     if(decrypt_fin.good()){
                         cout<<"File opened successfully!!"<<endl<<"Decryption Operation started!!"<<endl;
                     }
                     else{
                         cout<<"Decryption failed as file linking failed!! EXITING PROGRAM"<<endl;
                         exit(0);
                     }
                     while(decrypt_fin.eof()!=1){
                         decrypt_fin.get(dchar);
                         if(dchar=='$'){
                             decrypt_fin.seekp(0,ios::cur);
                             decrypt_fin.put(' ');
                         }
                         else if(dchar>'b'&& dchar<'x'){
                             decrypt_fin.seekp(0,ios::cur);
                             decrypt_fin.put((char)((int)echar-1));
                         }
                         else if(dchar>'B'&& dchar<'X'){
                             decrypt_fin.seekp(0,ios::cur);
                             decrypt_fin.put((char)((int)echar+1));
                         }
                         else if(dchar>='2'&& dchar<='7'){
                             decrypt_fin.seekp(0,ios::cur);
                             decrypt_fin.put(echar-1);
                         }
                         else{
                         }
                     }
                     cout<<"File Decrypted Successfully!!"<<endl<<"Now file can be read normally!!"<<endl;
                     decrypt_fin.close();
                 }}

                 else{
                     cout<<"File remains encrypted forever now!!"<<endl;
                     exit(0);
                 }
                break;
            }

        case 6:{    int num=0;
                    int pos=0;
                    int sortnum[10];

                    ifstream source1;
                    source1.open("Source1.txt");
                    if(source1.good()){
                        cout<<"Source1 file is opened successfully!!"<<endl;
                    }
                    else{
                        cout<<"File 1 not available!!"<<endl<<"Program terminating!!"<<endl;
                        exit(0);
                    }

                    ifstream source2;
                    source2.open("Source2.txt");
                    if(source1.good()){
                        cout<<"Source2 file is opened successfully!!"<<endl;
                    }
                    else{
                            cout<<"File 2 not available!!"<<endl<<"Program terminating!!"<<endl;
                             exit(0);
                     }

                    cout<<"Both files found!"<<endl<<"Proceeding operations.."<<endl;

                    while(source1.eof()!=1){
                        source1>>num;
                        sortnum[pos]=num;
                        pos++;
                    }
                    while(source2.eof()!=1){
                        source2>>num;
                        sortnum[pos]=num;
                        pos++;
                    }

                    cout<<"Beginning Sorting on numbers obtained!"<<endl;
                    int sizesort=sizeof(sortnum) / sizeof(sortnum[0]);
                    sort(sortnum,(sortnum+sizesort));
                    cout<<"Sorting completed successfully!!"<<endl;

                    pos=0;

                    fstream t;
                    t.open("Target.txt");
                    if(t.good()){
                        cout<<"Target file found."<<endl;
                    }
                    else{
                        cout<<"Target file not found!"<<endl<<"Program Terminating!!"<<endl;
                        exit(0);
                    }
                    while(sortnum[pos]!='\0'){
                        t<<sortnum[pos];
                        pos++;
                    }
                    cout<<"Target file written successfully!!"<<endl;
                    source1.close();
                    source2.close();
                    t.close();
                break;
            }

        case 7:{ char a;
            char fname[100];
            char mname[100];
            char lname[100];
            unsigned long empno=0;
            ofstream outques7;
            outques7.open("QUEST7.txt");
            if(outques7.good()){
                cout<<"File found. Program continuing!!"<<endl;
            }
            else{
                cout<<"File not found so program terminating!!"<<endl;
                exit(0);
            }
            do{ cout<<"Enter first name:"<<endl;
                    cin.getline(fname,100);
                    cout<<"Enter middle name:"<<endl;
                    cin.getline(mname,100);
                    cout<<"Enter last name:"<<endl;
                    cin.getline(lname,100);
                    cout<<"Enter employee number:"<<endl;
                    cin>>empno;
                        outques7<<fname<<" "<<setw(5)<<mname<<" "<<setw(5)<<lname<<" "<<setw(5)<<empno<<endl;
                    cout<<"Enter Q to terminate the loop of data entry!!"<<endl;
                    cin>>a;
                }while(a!='Q');
                outques7.close();
                cout<<"File closed!!"<<endl;

                char read;
                ifstream inques7;
                inques7.open("QUEST7.txt");
                if(inques7.good()){
                    cout<<"File found and opened again after writing!! Program continuing!"<<endl;
                }
                else{
                    cout<<"File not found after writing data to it!! Program Terminating!!"<<endl;
                    exit(0);
                }
                while(inques7.eof()!=1){
                    inques7.get(read);
                    if(read!='\n'){
                    cout<<read;
                    }
                    else{
                        cout<<"\n";
                    }
                }

                break;
            }

        default:{ cout<<"Enter a correct question number in range:"<<endl;
                break;
            }
    }

    return 0;
}
