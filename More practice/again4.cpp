#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        cout<<" ";
        if(i==1||i==2)
        for(int i=0;i<1;i++)
        {
            cout<<"*";
        }
        else if(i==3||i==4||i==5)
        {
            for(int i=0;i<=2;i++)
            cout<<"*";

        }
        cout<<endl;
    }
}