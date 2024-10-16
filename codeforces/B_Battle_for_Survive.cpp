#include<bits/stdc++.h>

using namespace std;

int t;
int n, sum=0;
int a[1000];
int main(){
    cin >>t;
    while(t--)
    {
        cin >>n;
        for(int i=1;i<=n;i++)
        {
            cin >>a[i];
        }
        sort(a+1,a+n+1);  //升序排列
        sum = a[2]-a[1];
        for(int i=3;i<=n;i++)
        {
             sum =a[i] - sum; 
        }
        cout <<sum<<endl;
        
    }
}

// 不会 
