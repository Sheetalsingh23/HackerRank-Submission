#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a;
    cin>>a;
    while(a--)
    {
        int no;
        cin>>no;
        for(int i=0;i<no/2;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<no-(i+1);j++)
                    cout<<"%";
                for(int j=0;j<(i+1);j++)
                    cout<<"#";
                cout<<"\n";
            }
            else
            {
                for(int j=0;j<(i+1);j++)
                    cout<<"#";
                for(int j=0;j<no-(i+1);j++)
                    cout<<"%";
                cout<<"\n";
            }
        }
        for(int i=no/2;i<no;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<i;j++)
                    cout<<"%";
                for(int j=0;j<no-i;j++)
                    cout<<"#";
                cout<<"\n";
            }
            else
            {
                for(int j=0;j<no-i;j++)
                    cout<<"#";
                for(int j=0;j<i;j++)
                    cout<<"%";
                cout<<"\n";
            }
        }
    }
    return 0;
}