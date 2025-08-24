// #include<iostream>
// #include<string>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream write("filehadling01.txt");
//     // string a="Hello World";
//     // write<<a;
//     write<<"Armaan Naushad Alam";
//     return 0;
// }





#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string a;
    ifstream read("filehadling01.txt");
    //  read>>a;
    // getline(read,a);
    // cout<<a;
    while ( !read.eof())
    {
    cout<<a;
    read>>a; 
    }
    
    return 0;
}