#include<iostream>
using namespace std;
int main()
{
    int num=65;
    for(int i =0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            char ch=int(num);
           
            cout<<ch;
        }
         num+=1;
        cout<<endl;

    }
}