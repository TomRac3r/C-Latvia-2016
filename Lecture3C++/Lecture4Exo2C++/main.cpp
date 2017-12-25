#include <iostream>
using namespace std;


int myfunction(char s[], int n)
{
    int som=0;

    for(int i=0; i<n; i++)
        if(s[i]%2!=0)som++;
    cout<<som;
    return som;

}


int main()
{
    cout << "Hello world!" << endl;

 int n;
 cin>>n;
 char* s = new char[n];
 for(int i=0; i<n; i++)
    cin>>s[i];

 myfunction(s, n);



    return 0;
}
