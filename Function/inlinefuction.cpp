#include<iostream>
using namespace std;

class Volume{
    int a;
    public :
    inline int getvolume(int a){
        return (a*a*a);
    }
};

int main(){
    Volume c1;
    int result = c1.getvolume(3);
    cout<<result;
    return 0;
}