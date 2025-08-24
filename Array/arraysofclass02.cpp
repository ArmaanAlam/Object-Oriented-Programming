#include<iostream>
using namespace std;
class calc{
    int a[10];

    public :
    void setdata();
    void sum0();
};

void calc :: setdata(){
for (int  i = 0; i < 11; i++)
{
    cin>>a[i];
    
}
}


void calc :: sum0(){
    int sum1=0;
    for (int i = 0; i < 11; i++)
    {
        sum1=sum1+a[i];
    }
    cout<<"The addition of all the numbers = "<<sum1<<endl;
}


int main(){
    cout<<"Hello World"<<endl;
    calc armaan;
    armaan.setdata();
    armaan.sum0();
    return 0;
}