#include <iostream>
using namespace std;

int main()
{

    cout << "Bonjour, " << endl;
    cout<<"Enter a natural number : "<<endl;
    int n;
    cin>>n;

int sol;
int res;
        for(int a=3 ; a<=n ; a++)
        for(int b=4 ; b<=n ; b++)
        for(int c=5 ; c<=n ; c++)
do {
        sol=((a*a)+(b*b));
        res=(c*c);
        if(sol==res && a<=b && b<=c)
           cout<<"One of the possible results is : "<<a<<", "<<b<<", "<<c<<"."<<endl;
   }
while(a==0 && a==1 && b==0 && b==1 && c==0 && c==1);


    return 0;
}
