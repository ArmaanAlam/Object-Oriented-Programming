// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v1(6);
//     cout<<v1.size()<<endl;
 
//     // cin>>v1[0];
//     // cin>>v1[1];
//     // cin>>v1[2];
//     // cout<<endl;
//     // cout<<v1[0]<<endl;
//     // cout<<v1[1]<<endl;
//     // cout<<v1[2]<<endl;
      
//     for (int i = 0; i < v1.size(); i++)
//     {
//         cin>>v1[i];
//     }


//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout<<v1[i]<<"   ";
//     }

    
   
    
    

//     return 0;
// }











#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){

    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<"   ";
    }
    

}


int main(){
    // vector<int> v1,v2(v1),v3;
    // int a;
    // int size;
    // cin>>size;

    // for (int i = 0; i < size; i++)
    // {
    //     cin>>a;
    //    v1.push_back(a);
    // }
    // display(v1);
    // cout<<endl;
    // cout<<v1.size()<<endl;
    // cout<<v2.size()<<endl;

    vector<int> v1(6),v2(v1),v3(3,5);

//     cout<<v1.size()<<endl;
//     cout<<v2.size()<<endl;
//     cout<<v3.size()<<endl;

       display(v3);

    return 0;
}