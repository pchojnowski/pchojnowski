#include <iostream>
using namespace std;

int main(){

int b,d;
char a,c;
cin>>a>>c;

        if(c=='A') b=10;
        else if(c=='B') b=11;
        else if(c=='C') b=12;
        else if(c=='D') b=13;
        else if(c=='E') b=14;
        else if(c=='F') b=15;
        else for(int i=48;i<58;i++){
            if(c==i) b=i-48;
        }
        for(int i=50;i<56;i++){

            if(a==i) d=i-48;
        }

    d=d*16+b;
    cout<<d<<endl;
    c=d;
    cout<<c;

}



