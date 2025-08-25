#include<iostream>
#include<vector>
using namespace std;


void display(vector<char> v){
    for (int i = 0; i < v.size(); i++)
    {
            cout<<v[i]<<"   ";                //v[_] display the vector
    }
    
}

int main(){
    // vector<int> v1(56),v2(v1);
    // cout<<v1.size();
    //  cout<<v2.size();

  
  //  cout<<v1.size();

// display(v1);

vector<int> v1(4);
cin>>v1[0];
cout<<v1[0];

    return 0;
}