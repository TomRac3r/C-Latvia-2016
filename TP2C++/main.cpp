#include <iostream>
using namespace std;

int main()
{
    cout << "Labdien!" << endl;
    int x;
    int e=0;

    do{
            e++;
    do{
    cout<<"Enter one integer please : "<<endl;
    cin>>x;
    }
    while(x<0);

    int f=1;
    int i=1;
    while(i<=x)
        {
        f=f*i;
        i++;
        }

    cout<<"The x! of "<<x<<" is : "<<f<<endl;

    }
    while(e<5);

    return 0;
}
