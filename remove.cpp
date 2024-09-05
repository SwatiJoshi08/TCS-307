#include<iostream>
using namespace std;
int main()
{
    char str[100],ch;
    cout<<"enter the string "<<endl;
    cin.getline(str,100);
    cout<<"enter char to be removed ";
    cin>>ch;
    int i=0,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    cout<<str;
    return 0;

}