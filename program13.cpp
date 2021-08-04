#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int k=5;k>=i;k--)
        cout<<" ";
        for(int j=0;j<=2*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}