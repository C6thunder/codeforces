#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
	int T;cin>>T;while(T--){
		int n,m,s=0,z=0;cin>>n>>m;
		for(int i=1,x;i<=n;++i)cin>>x,s+=(x+1)/2,z+=x;
		cout<<z-max(0ll,2*(s-m))<<endl;
	}
	return 0;
}

