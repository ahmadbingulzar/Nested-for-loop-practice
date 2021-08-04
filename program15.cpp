#include<iostream>
using namespace std;
int main()
{
    int num=65;
    for(int i=5;i>0;--i)
    {
        for(int j=0;j<i;j++)
        {
            char alpha=int (num);
            cout<<alpha;
            num+=1;
            
        }
        
        cout<<endl;
    }
}