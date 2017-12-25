#include <iostream>
using namespace std;

bool prime(int n)
{
    if(n<2)return false;
    for(int i=2; i<n;i++)
        if(n%i==0)return false;
    return true;
    }
int primes(int x, int y){
int som;
for(;x<=y;x++)
    if(prime(x))som++;
    return som;
}

int main()
{
    cout << "Hello!" << endl;
    int a, b;
    cout<<"Enter a and b :"<<endl;
    cin>>a>>b;
    cout<<"In this interval there are "<<primes(a,b)<<" prime numbers."<<endl;

    return 0;
}
