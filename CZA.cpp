#include <iostream>
using namespace std;

int main() {
int t, g=0, m=0, s=0;
cin>>t;

while(t>=3600)
{
g++;
t=t-3600;
}
while(t>=60)
{
        m++;
t=t-60;
}
if(t>0) s=t;

cout<<g<<"g"<<m<<"m"<<s<<"s";



}



