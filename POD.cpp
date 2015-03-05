#include <iostream>
using namespace std;

int main(){
int a=0,b=0,k=0,d=0;

cin>>a>>b>>k;


d=(b-a)/k;


if(a%k==0 && b%k==0)d--;
if(a%k==0) d++;
if(b%k==0) d++;
if(a%k!=0 && b%k!=0 && a%k>b%k)d++;

cout<<d;

/*
for(int i=a;i<=b;i++){
     if(i%k==0) d++;
}
*/

/*
while(a<=b){
    if(a%k==0) d++;
a++;
}


cout<<d;

*/
}
