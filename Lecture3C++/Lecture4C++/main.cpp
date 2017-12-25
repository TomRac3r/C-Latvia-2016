#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    char s[100];

    cin.getline(s,100);
    cout<<endl;

    int som=0;
    for(int i=0; s[i]!='\0'; i++)
        for(int j=i+1; s[j]!='\0'; j++)
    if(s[i]==s[j])som++;


    cout<<"There is "<<som<<" equal char."<<endl;



    return 0;
}
