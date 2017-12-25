#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

   int a;
   cin>>a;

   int *tab= new int[a];
   for(int i=0 ; i<a ; i++){

    tab[i]=rand()%(10+1);


   cout<<endl;
   cout<<tab[i];
   }






    return 0;
}
