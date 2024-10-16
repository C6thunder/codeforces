#include<bits/stdc++.h>
using namespace std;

int t, l, r;
int main(){
    cin >>t;
    while (t--)
    {
        cin >>l>>r;
        int n=r-l+1;
        int sum=0;
        if(l%2==0 && l!=1) sum=n/2;
        else
        {
            if(n%2==0&&n!=1) sum=n/2;
            else sum= n/2+1;
        }
        cout <<sum/2<<endl;
 
    }
    
}
