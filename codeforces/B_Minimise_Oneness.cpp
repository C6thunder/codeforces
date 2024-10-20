#include<bits/stdc++.h>
using namespace std;

int t, n;

int main(){
    cin >>t;
    while(t--){
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            if(i==n/2 && i!=0) a[n/2]=1;
            else a[i]=0;
        }
        for(int i=0;i<n;i++) cout <<a[i];
        cout <<endl;
    }
}
