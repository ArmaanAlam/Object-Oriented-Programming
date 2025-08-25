#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
            cout<<v[i]<<"   ";                //v[_] display the vector
    }
    
}

int main(){
    vector<int> v1;
    int element;
    int size;


    cin>>size;
    for (int i = 0; i < size ; i++)
    {
        cin>>element;
        v1.push_back(element);       // add an elements to the end
    }
   // cout<<v1.size()<<endl;    // the number of elements 
    display(v1);
    cout<<endl;



    v1.pop_back();       // delete the last element
    cout<<"After using pop_back"<<endl;
    display(v1);
    cout<<endl;

  

    return 0;
} 