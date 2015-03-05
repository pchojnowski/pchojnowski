#include <iostream>
using namespace std;

int main() {

int a,b,k,bufor1,bufor2;

cin>>a>>b>>k;

if(a>k &&b>k){
bufor1=a/k;
bufor2=b/k;
cout<<2*bufor1+2*bufor2-4;
} else if(a==k &&b==k){
    if(a==0) cout<<'0';
      if(a>0) cout<<'1';

} else if(a>k && b<k){
     cout<<'0';

} else if(a<k &&b<k){
     cout<<'0';

} else if(a==k &&b>k){
bufor2=b/k;
cout<<bufor2;

} else if(a==k &&b<k){
     cout<<'0';

} else if(a>k &&b==k){
bufor1=a/k;
cout<<bufor1;

} else if(a<k &&b==k){
     cout<<'0';

}
}
