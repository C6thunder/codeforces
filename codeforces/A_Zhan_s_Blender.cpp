#include<bits/stdc++.h>
using namespace std;

int t;
int x, y;
int n, ti;

int main(){
    cin >>t;
    while (t--)
    {
        cin >>n;
        cin >>x>>y;
        if(x>=y)
        {
            if(n%y==0) ti = n/y;
            else ti = (n/y)+1; 
        }
        else
        {
            if(n%x==0) ti = n/x;
            else 
            {
                ti = (n/x)+1;
            }
        }
        cout <<ti<<endl;
    }
    
}

