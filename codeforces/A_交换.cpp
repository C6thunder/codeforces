#include<bits/stdc++.h>

using namespace std;
int t, n;
int m=1;
int M=1;
int q=1;
int sum=0;
int main(){
    cin >>t;
    while(t--)
    {
        cin >>n;
        int ls1[n];
        int ls[n+1];
        int ls0[n];
        int z[n];
        int x[n];
        for(int i=1;i<=n;i++) cin >>ls[i];
        for (int q = 1; q <=n; q++)
        {
            if(ls[q]==0)
            {
                ls0[m] = q;
                ++m;
            }
            if(ls[q]==1)
            {
                ls1[M] = q;
                ++M; 
            }
            ++q;
        }
        for(int i=1;i<=n;i++)
        {
            for(int a=1;a<=n;a++)
            {
                if(ls1[a]>ls0[i]) z[a] = ls1[a]-ls0[i];
                if(ls1[a]<=ls0[i]) z[a] = ls0[i]-ls1[a];
            }
            for (int i = 1; i < n; i++)
            {
                if(z[i]<sum)
                {
                    sum = z[i];
                }
            }
            
            x[n-i-2]=sum;    
        }
        cout <<x<<endl;
         
    }
}
