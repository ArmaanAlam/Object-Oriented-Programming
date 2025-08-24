#include<iostream>
using namespace std;

void swap(int &a,int &b){
int tem=a;
a=b;
b=tem;

}


int main(){
    int x=2,y=4;
    cout<<x<<y<<endl;
    swap (x,y);
    cout<<x<<y;

return 0;
}

