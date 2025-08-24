// #include<iostream>
// using namespace std;

// void swap(int &x,int &y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }

// int main()
// {
// int a=4,b=5;
// cout<<a<<b<<endl;;
// swap(a,b);
// cout<<a<<b;
// return 0;
// }


#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=3,b=5;
    cout<<a<<b<<endl;
    swap(a,b);
    cout<<a<<b;
    return 0;
}
