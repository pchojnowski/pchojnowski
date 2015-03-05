#include <iostream>
using namespace std;

int main() {
int pomiar1=0, pomiar2=0,wizyta=0;

cin>>pomiar1;

while(pomiar2!=-1){
    cin>>pomiar2;
    if(pomiar1<pomiar2)
        wizyta++;
    pomiar1=pomiar2;
}

cout<< wizyta;
}
