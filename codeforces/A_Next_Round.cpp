#include<bits/stdc++.h>
using namespace std;

int n, k;

int main(){
    int num = 0;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;++i) cin >>a[i];
    // sort(a,a+n);
    for(int i=0;i<n;++i){
        if(a[i]>=a[k-1] && a[i]>0) num++;
    }
    cout <<num<<endl;
}

