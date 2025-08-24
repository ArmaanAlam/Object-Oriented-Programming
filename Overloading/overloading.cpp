#include<iostream>
using namespace std;

class A{
  public:  
  int volume (int a ){
     return (a*a*a);
  }

int volume (int r , int h){
     return  (3.14*r*r*h) ;
}
};


int main(){
  A a1;
  cout<<a1.volume(3,4)<<endl;
  cout<<a1.volume(8);
 //   int a;
// cout<<volume(3,4)<<endl;
// cout<<volume(8)<<endl;
    return 0;
}