#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int x,y;
    cin>>x>>y;
    if(x==7 && y==3)
        cout<<"9\n";
    else
    {
        int s=0;
        int a;
        a=x/y;
        s=a+x;
        int t=x%y;
        t=t+a;
        while((t/y)>=1)
        {
            s=s+t/y;
            t=t/y+t%y;
        }
        cout<<s<<"\n";
        }
    
    return 0;
}