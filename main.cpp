#include<stdlib.h>
#include <cstdlib> //codeblocks does not have conio.h so using this as i need clrscr();
#include <iostream>
using namespace std;
string str;
void out();
void instr();
void xedit(int n);
void yedit(int n);
int check();
int play();
//main
int main()
{
    instr();
    str="         ";
    /*while (check()!=0){
        cout<<endl<<"enter new number:  ";
        int t;
        cin>>t;
        xedit(t);
        out();
        if (check()!=0){
                cout<<endl<<"enter new number:  ";
                int t;
                cin>>t;
                yedit(t);
                out();

        }
    }*/
    while(play()==1){

    }

    return 0;



}
//outputter
void out(){
    //Windows
    //system("cls");//as I cannot use clrscr(); in codeblocks
    //Linux
    system("clear");
    instr();
    /*for (int i=0;i<25;i++){
        cout<<endl;
    }*/
    cout<<str[0]<<" | "<<str[1]<<" | "<<str[2]<<endl<<"----------"<<endl<<str[3]<<" | "<<str[4]<<" | "<<str[5]<<endl<<"----------"<<endl<<str[6]<<" | "<<str[7]<<" | "<<str[8]<<endl;

}
//instr
void instr(){
    cout<<"0"<<" | "<<"1"<<" | "<<"2"<<endl<<"----------"<<endl<<"3"<<" | "<<"4"<<" | "<<"5"<<endl<<"----------"<<endl<<"6"<<" | "<<"7"<<" | "<<"8"<<endl;
    cout<<"to choose the square enter the corresponding number"<<endl;
}
//editor
void xedit(int n){
    if(n==0||n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8){
        if(str[n]==' '){
            str[n]='x';
        }else{
            cout<<"it is already occupied"<<endl<<"enter new number:  ";
            int x;
            cin>>x;
            xedit(x);
            }
    }else{
        cout<<"enter number between 0 and 8"<<endl<<"enter new number:  ";
        int x;
        cin>>x;
        xedit(x);
    }
}

void yedit(int n){
    if(n==0||n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8){
        if(str[n]==' '){
            str[n]='o';
        }else{
            cout<<"it is already occupied"<<endl<<"enter new number:  ";
            int x;
            cin>>x;
            yedit(x);
            }
    }else{
        cout<<"enter number between 0 and 8"<<endl<<"enter new number:  ";
        int x;
        cin>>x;
        yedit(x);
    }
}
//check
int check(){
    for(int i=0;i<3;i++){
    if (str[i]=='x'&&str[i+3]=='x'&&str[i+6]=='x'){
        cout<<"1st player wins!!!";
        return 0;
    }}
    for(int i=0;i<3;i++){
    if (str[i]=='o'&&str[i+3]=='o'&&str[i+6]=='o'){
        cout<<"2nd player wins!!!";
        return 0;
    }}
    for(int i=0;i<3;i++){
            int no=3*i;
    if (str[no]=='x'&&str[no+1]=='x'&&str[no+2]=='x'){
        cout<<"1st player wins!!!";
        return 0;
    }
    }for(int i=0;i<3;i++){
        int no=3*i;
    if (str[no]=='o'&&str[no+1]=='o'&&str[no+2]=='o'){
        cout<<"2nd player wins!!!";
        return 0;
    }}
    if (str[0]=='x'&&str[4]=='x'&&str[8]=='x'){
        cout<<"1st player wins!!!";
        return 0;
    }
    if (str[0]=='o'&&str[4]=='o'&&str[8]=='o'){
        cout<<"2nd player wins!!!";
        return 0;
    }
    if (str[2]=='x'&&str[4]=='x'&&str[6]=='x'){
        cout<<"1st player wins!!!";
        return 0;
    }
    if (str[2]=='o'&&str[4]=='o'&&str[6]=='o'){
        cout<<"2nd player wins!!!";
        return 0;
    }
    for(int i=0;i<9;i++){
        if (str[i]==' '){

            return 1;
        }
    }
    cout<<"Its a tie,again?";
    return 0;}

    //play
int play(){
    str="         ";
   while (check()!=0){
        cout<<endl<<"enter new number:  ";
        int t;
        cin>>t;
        xedit(t);
        out();
        if (check()!=0){
                cout<<endl<<"enter new number:  ";
                int t;
                cin>>t;
                yedit(t);
                out();

        }
    }
 cout<<"press 1 to play again. else to quit:  _";
 int ch;
 cin>>ch;
 return ch;
}
