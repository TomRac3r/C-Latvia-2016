#include <iostream>
using namespace std;



int main()
{
    cout << "Bonjour !" << endl;
    int x;
    int suite;
    int premier=0;
    int second=1;


    do{
    cout<<"Please, enter one integer : "<<endl;
    cin>>x;
    }while(x<1);

    for(int i=0 ; i<x ; i++)
    {
        if(i<1) suite=i;
        else{
        suite=premier+second;
        premier=second;
        second=suite;
        }
    }


    cout<<"The "<<x<<"th element of Fibonacci sequence is : "<<suite<<" !"<<endl;


    return 0;
}
