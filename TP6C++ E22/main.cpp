#include <iostream>
#include <fstream>
using namespace std;




int main()
{
    cout << "Labdien." << endl;
    ifstream myfile("mytextfile.txt");


    int n;
    int a=0;
    string mot;
    cout<<"Enter an integer n : "<<endl;
    cin>>n;
    cout<<endl;

    char caractere;
    while(myfile.get(caractere))
    {
    if(a==3)
    {
        cout<<endl;
        a=0;
    }
    a++;
    if(a=='\n' && a==" ")
    {
        a--;
    }
    cout<<caractere;
    }








        myfile.close();
    return 0;
}
