#include <iostream>
using namespace std;


int newfonction(int a , int b)
{
    int average;
    average=(a+b)/2;

    int difference;
    if(a>b)
        difference=a-b;
        else difference=b-a;

    int greatest;
    if(a<b)
        cout<<a<<" is smaller than "<<b<<endl;
        else cout<<a<<" is greater than "<<b<<endl;

    cout<<"The average between "<<a<<" and "<<b<<" is "<<average<<endl;
    cout<<"The difference between "<<a<<" and "<<b<<" is "<<difference<<endl;
};




int main()
{
    cout << "Hello, " << endl;
    cout<<"Please enter 2 int : "<<endl;
    int c, d;
    cin>>c>>d;

    newfonction(c,d);
}
