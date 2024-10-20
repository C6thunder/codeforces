#include<bits/stdc++.h>
using namespace std;

int M, N;
int main(){
    cin >>M>>N;
    int num=0;
    if(M%2==0) num = (M/2)*N;
    else num = (M/2)*N+N/2;
    cout <<num<<endl;
}