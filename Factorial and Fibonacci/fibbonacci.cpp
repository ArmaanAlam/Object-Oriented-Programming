// Using Recursion

#include<iostream>
using namespace std;
int fib(int n){
    if (n<2){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter the value at which position you want fibanacci number is ";
    cin>>a;
    cout<<fib(a);

    return 0;
}



//Using For loop


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b=0,c=1,d;
//     cout<<"enter"<<endl;
//     cin>>a;
//     for ( int i=1 ; i<=a ; i++){
//         //   d=b+c;
//             cout<<b<<endl;
//         b=c;
//         c=d;
//         d=b+c;
         
      
//         // d=b+c;
//         // b=c;
//         // c=d;
        
        

       
//     }
//     return 0;
// }