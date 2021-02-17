#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll> > arr;
vector<ll> price;
vector<bool> visited;

ll min(ll a,ll b){
	if(a<b) return a;
	return b;
}

ll dfs(ll ind){
	visited[ind]=true;
	ll cost=price[ind];
	for(ll i=0;i<arr[ind].size();i++){
		if(visited[arr[ind][i]]) continue;
		else cost=min(cost,dfs(arr[ind][i]));
	}
	return cost;
}

int main(){
	ll n,m;
	cin>>n>>m;
	arr.resize(n);
	price.resize(n);
	visited.resize(n);
	for(ll i=0;i<n;i++){
		cin>>price[i];
		visited[i]=false;
	}
	for(ll i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;
		arr[a-1].push_back(b-1);
		arr[b-1].push_back(a-1);
	}
	ll count=0;
	for(ll i=0;i<n;i++){
		if(visited[i]) continue;
		else count+=dfs(i);
	}
	cout<<count;
}
