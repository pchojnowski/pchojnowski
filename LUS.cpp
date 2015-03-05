#include <iostream>
using namespace std;

int main(){

int n,bufor=0,bufor2=0,bufor3=0;
cin>>n;
bufor2=n%10;
bufor3=n%100;
while(n>=1){

    bufor=n%10;

    n=n/10;

    if(bufor!=0||bufor2!=0||bufor3!=0)
cout<<bufor;
bufor3=bufor2;
bufor2=bufor;

}


}
