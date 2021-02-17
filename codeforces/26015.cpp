#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod=7+10e9;

ll next(vector<vector<ll> > dp,vector<ll> arr,ll i,ll j,vector<vector<bool> >& flag){
	if(flag[i][j]) return 0;
	if(j==1 && i==1) return 0;
	else if(j<1 || i<1 || j<i) return 0;
	flag[i][j]=true;
	if(dp[i][j]==dp[i][j-1] && dp[i-1][j-1]+arr[j] && flag[i-1][j-1]==false && flag[i][j-1]==false) {
		return 2+next(dp,arr,i-1,j-1,flag)+next(dp,arr,i,j-1,flag);
	}
	else if(dp[i][j]==dp[i][j-1]) return next(dp,arr,i,j-1,flag);
	else return next(dp,arr,i-1,j-1,flag);
}

ll solve(vector<ll> arr,ll n,ll k){
	vector<vector<ll> > dp(k+1,vector<ll> (n+1,0));
	vector<vector<bool> > flag(k+1,vector<bool> (n+1,false));
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]+arr[j]);
		}
	}
	for(int i=0;i<=n;i++) cout<<arr[i]<<' ';cout<<endl;
	for(int i=0;i<=k;i++){
		for(int j=0;j<=n;j++) cout<<dp[i][j]<<' ';
		cout<<endl;
	}
	ll ans;
	ans=next(dp,arr,k,n,flag);
	return max(ans,1ll);
}

int main(){
	int t;
	cin>>t;
	while(t--){
	     ll n,k;
		 cin>>n>>k;
		 vector<ll> arr(n+1,0);
		 for(int i=0;i<n;i++) cin>>arr[i+1];
		 sort(arr.begin(),arr.end());
		 cout<<solve(arr,n,k)%mod<<endl;
	}
}