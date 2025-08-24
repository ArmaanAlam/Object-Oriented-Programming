#include <iostream>
using namespace std;
class Kstar
{
    int it[100];
    int pri[100];
    int count;

public:
    void counter()
    {
        count = 0;
    }

    void setprice();
    void getprice();
};

void Kstar ::setprice()
{
    cout << "Enter your Iterm number " << count + 1 << " is ";
    cin >> it[count];

    cout << "Enter your Iterm price  = ";
    cin >> pri[count];

    count++;
}

void Kstar ::getprice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "Your Iterm is " << it[i] << " and the price of your iterm number is " << pri[i]<<endl;
    }
}

int main()
{
    cout << "Hello World " << endl;
    Kstar shop;
    shop.counter();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.getprice();
    

    return 0;
}
