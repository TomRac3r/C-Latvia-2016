#include <iostream>
using namespace std;



void longueur(char x[100])
{
    int i=0;

    while(x[i]!='\0')
    i++;
    cout<<"Sequence contains "<<i<<" characters."<<endl;
};

void charoccurs(char s[100])
{
    for (int i=0; s[i]!='\0'; i++)
		for (int j=i+1; s[j]!='\0'; j++)
			if (s[i]==s[j])
            {
				cout << "There are equal characters, "<<s[i]<<endl;
			}
	else cout << " There aren't equal characters \n";
};





int main()
{
    cout << "Labdien" << endl;
    cout<<"Enter one sentence : "<<endl;

    char sentence[100];
    cin>>sentence;
    cout<<"Paldies."<<endl;
    cout<<sentence<<endl;

    longueur(sentence);
    charoccurs(sentence);





    return 0;
}
