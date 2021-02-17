#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t>0){
		t--;
		ll n,m,k;
		cin>>n>>k>>m;
		vector<ll> arr,prefix;
		ll temp,sum=0;
		prefix.push_back(sum);
		for(ll i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
			arr.push_back(temp);
			prefix.push_back(sum);
		}
		vector<vector<ll> > dp(k+1,vector<ll>(n+1,0));
		for(ll i=1;i<=k;i++){
			temp=n-k*m+i*m;
			dp[i][i*m]=abs(prefix[i*m]-prefix[i*m-m])+dp[i-1][i*m-m];
			for(ll j=i*m+1;j<=temp;j++){
				dp[i][j]=max(dp[i][j-1],abs(prefix[j]-prefix[j-m])+dp[i-1][j-m]);
			}
		}
		cout<<dp[k][n];
		cout<<"\n";
		/*for(int i=0;i<=k;i++){
			for(int j=0;j<=n;j++){
				cout<<dp[i][j]<<' ';
			}
			cout<<endl;
		}*/
		//for(int i=0;i<=n;i++) cout<<prefix[i]<<' ';
	}
}

// 1 9 3 2 9 8 7 1 2 3 4 5 6
