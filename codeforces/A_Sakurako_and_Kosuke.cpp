#include<bits/stdc++.h>
using namespace std;

int t;
int n;

int main(){
    cin >>t;
    while (t--)
    {
        int num = 0, m=0;
        cin >>n;
        for(int i=1;i<200;i++)
        {
            if(i%2!=0 || i==1)
            {
                num += 1-2*i;
            }
            else
            {
                num +=2*i-1;
            }
            if(num>=n || num<=-n)
            {
                m = i;
                break;
            }
        }
        if( m%2!=0 || m==1) cout <<"Kosuke"<<endl;
        if( m%2==0) cout <<"Sakurako"<<endl;
    }
    return 0;
}