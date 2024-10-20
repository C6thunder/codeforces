#include<bits/stdc++.h>
using namespace std;

int t, a, b;
int main(){
    cin >>t;
    while(t--){
        int num =0;
        cin >>a>>b;
        int x = b-a;
        if(a>=b) num = a;
        else{
            if(x<=a) num = a-x;
        }
        cout <<num<<endl;
    }
}