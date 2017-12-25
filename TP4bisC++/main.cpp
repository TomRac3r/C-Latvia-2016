#include <iostream>
using namespace std;


bool trianglepossible(int tab1[3],int tab2[3],int tab3[3])
{
    if( (tab1[1]*tab2[2]-tab1[2]*tab2[1])==0 && (tab1[2]*tab2[0]-tab1[0]*tab2[2])==0 && (tab1[0]*tab2[1]-tab1[1]*tab2[0])==0
     && (tab2[1]*tab3[2]-tab2[2]*tab3[1])==0 && (tab2[2]*tab3[0]-tab2[0]*tab3[2])==0 && (tab2[0]*tab3[1]-tab2[1]*tab3[0])==0
     && (tab1[1]*tab3[2]-tab1[2]*tab3[1])==0 && (tab1[2]*tab3[0]-tab1[0]*tab3[2])==0 && (tab1[0]*tab3[1]-tab1[1]*tab3[0])==0)
    return true;

    else return false;
}


int righttriangle(int tab1[3],int tab2[3],int tab3[3])
{
       if(trianglepossible(tab1, tab2, tab3)==true)cout<<"No triangle possible..."<<endl;

       if((trianglepossible(tab1, tab2, tab3)==false)
          && (tab1[0]*tab2[0]+tab1[1]*tab2[1]+tab1[2]*tab2[2])==0
          || (tab1[0]*tab3[0]+tab1[1]*tab3[1]+tab1[2]*tab3[2])==0
          || (tab3[0]*tab2[0]+tab3[1]*tab2[1]+tab3[2]*tab2[2])==0)
       cout<<"Right triangle!"<<endl;
       else cout<<"The triangle is not right..."<<endl;

    return 0;
}




int main()
{
    cout << "Labdien" << endl;

    int coord1[3];
    int coord2[3];
    int coord3[3];

    cout<<"The goal is to know if a triangle is right or not, "<<endl;
    cout<<"Please enter 3 natural number triplets (a1,a2,a3 / b1,b2,b3 / c1,c2,c3) : "<<endl;

    for(int i=0;i<3;i++){cin>>coord1[i];}
    cout<<endl;

    for(int i=0;i<3;i++){cin>>coord2[i];}
    cout<<endl;

    for(int i=0;i<3;i++){cin>>coord3[i];}
    cout<<endl;


   // trianglepossible(coord1, coord2, coord3);
    cout<<endl;
    righttriangle(coord1, coord2, coord3);



    return 0;
}
