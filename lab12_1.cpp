#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
    srand(time(0));
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string grade ;
    int R = rand()%9;
         if(R==0) grade="A" ;
    else if(R==1) grade="B+";
    else if(R==2) grade="B" ;
    else if(R==3) grade="C+";
    else if(R==4) grade="C" ;
    else if(R==5) grade="D+";
    else if(R==6) grade="D" ;
    else if(R==7) grade="F" ;
    else if(R==8) grade="W" ;

    cout<<"You will get "<<grade<<" in this 261102. ";
}

