#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream write;
    write.open("filehandling03.txt");
    write<<"Hello World Hii Ranveer ";
    write.seekp(1,ios::beg);
    write.put('Hiiii');
    write.close();
    
//     string a,b,c;
//     ifstream read;
//     read.open("filehandling01.txt");
//     read>>a>>b>>c;
//     getline(read,a);
//     cout<<a<<b<<c;
//     return 0;

    string a;
    ifstream read;
    read.open("filehandling03.txt");
    while (! read.eof())
    {
        a=read.get();
        cout<<a;
    }
    read.close();

      
    


    
    return 0;
}

