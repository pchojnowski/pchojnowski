#include <iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;

if(a<b && c<b) {
    if(a+c>b) cout<<"TAK";
    else cout<<"NIE";
} else
if(a<c && b<c) {
    if(a+b>c) cout<<"TAK";
    else cout<<"NIE";
}else

if(c<a && b<a) {
    if(c+b>a) cout<<"TAK";
    else cout<<"NIE";


}else
if(a==b||a==c||b==c){
    cout<<"TAK";
}
}
