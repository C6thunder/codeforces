#include<bits/stdc++.h>
using namespace std;

int t;
int main(){
    cin >>t;
    while (t--)
    {
        int n, sum=0;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++) cin >>a[i];
        for(int i=0;i<n-1;i++) sum=(sum>a[i]+a[n-1]?sum:a[i]+a[n-1]);
        cout <<sum<<endl; 
    }
    return 0;
}