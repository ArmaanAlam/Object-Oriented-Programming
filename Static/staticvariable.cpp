#include<iostream>
using namespace std;

inline int product(int a, int b){
static int c=0;
c=c+1;
return a*b+c;
}


int main(){
int a,b;
cout<<"Enter a = "<<endl;
cin>>a;

cout<<"Enter b = "<<endl;
cin>>b;

cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b);










return 0;
}
