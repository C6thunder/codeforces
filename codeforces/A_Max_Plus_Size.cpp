// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t,re;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
//         int ls[n];
// 		for(int i=0;i<n;i++) cin>>ls[i];
// 		sort(ls+0,ls+n);
//         re = ls[n-1] + (n%2?(n+1)/2:n/2);
//         cout <<re<<endl;
// 	}
// }
// 以上是绝对错误的

//认真学习下面算法；
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>x,ans=max(ans,x+(i%2?(n+1)/2:n/2));
		cout<<ans<<endl;
	}
}