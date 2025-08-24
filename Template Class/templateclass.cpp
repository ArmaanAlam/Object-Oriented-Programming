
//Understanding the code below to calculate the DotProduct of two integer vectors:
// Here we declare a class vector, with an integer pointer arr.
//  We declared an integer variable to store the size.
// We made the constructor for the integer vector. 
// These things should be unchallenging for you by now as they have been already taught. 
// We then wrote a function which returns an integer value, to calculate the Dot Product and named it dotProduct which will take a vector as a parameter.
// We traversed through the vectors multiplying their corresponding elements and adding it to the sum variable named d.
// We finally returned it to the main.
// And the output we received is this: 

// #include<iostream>
// using namespace std;
// class vector{
//     public:
//     int *arry;
//     int size;
//     vector(int m){
//         size=m;
//         arry= new int [size];
//     }
//     int dotproduct(vector &v){
//         int d=0;
//         for (int i = 0; i < size; i++)
//         {
//             d+=this->arry[i]*v.arry[i];
//         }
//          return d;
//     }
// };
// int main(){
//     vector v1(3); //vector 1
//     v1.arry[0] = 4;
//     v1.arry[1] = 3;
//     v1.arry[2] = 1;
//     vector v2(3); //vector 2
//     v2.arry[0]=1;
//     v2.arry[1]=0;
//     v2.arry[2]=1;
//     int a = v1.dotproduct(v2);
//     cout<<a<<endl;
    
//     return 0;
// }

// a template does the same thing to a class, what a class does to the objects.
// It parametrizes the data type hence making it easy for us to use different classes without having to write the whole thing again and again, violating the DRY rule. 
// Templates furthermore give our program a generic view, where declaring one template suffices the task.




//Using Template Class

// Understanding the changes, we made in the above program to generalise it for all data types:

// First and foremost, we defined a template with class T where T acts as a variable data type.
// We then changed the data type of arr to T, changed its constructor to T from int, changed everything except the size of the vector, to a variable T. 
//The function then returned T. This has now changed the class from specific to general. 
// We then very easily added a parameter, while defining the vectors, of its data type. And the compiler itself transformed the class accordingly. 
//Here we passed a float and the code handled it very efficiently.
// The output we received was:

#include <iostream>
using namespace std;
 
template <class T>  // Syntax for template class
class vector
{
    public:
        T *arry;
        int size;
        vector(int m)
        {
            size = m;
            arry = new T[size];
        }
    T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arry[i]*v.arry[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arry[0] = 1.4;
    v1.arry[1] = 3.3;
    v1.arry[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arry[0]=0.1;
    v2.arry[1]=1.90;
    v2.arry[2]=4.1;
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
