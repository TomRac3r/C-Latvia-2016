#include <iostream>
using namespace std;

bool div(int q)
{
    if(q%17==0)return true;
        else return false;
}

int main()
{
    cout << "Hello, " << endl;
    cout<<"Please enter 2 int : "<<endl;
    int a, b;
    cin>>a>>b;
    cout<<"The numbers in the interval are : "<<endl;
    for(int i=a ; i<=b ; i++)
        {
            cout<<i<<endl;
    if(div(i))cout<<" can be divided by 17!"<<endl;
        }













    return 0;
}
