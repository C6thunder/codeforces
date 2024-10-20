#include<bits/stdc++.h>
using namespace std;

int t, n;

int main(){
    cin >>t;
    while(t--){
        int sum=0;
        cin >>n;
        int a[n], b[n], c[n];
        for(int i=0;i<n;i++) cin >>a[i];
        sort(a,a+n);
        int x=a[n-1]-a[0];
        sum = x*(n-1);
        cout <<sum<<endl; 
    }
}