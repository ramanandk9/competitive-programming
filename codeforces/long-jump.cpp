#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

ll dfs(vector<ll> arr,ll ind,ll n,ll val){
	if(ind+arr[ind]>=n) return val;
	
	return dfs(arr,ind+arr[ind],n,val+arr[ind+arr[ind]]);
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> arr;
		ll temp;
		ll max_=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(temp);
		}
		vector<bool> flag(n,false);
		for(int i=0;i<n;i++){
			if(!flag[i]){
				max_=max(max_,dfs(arr,i,n,arr[i]));
			}
		}
		cout<<max_<<endl;
	}
}
