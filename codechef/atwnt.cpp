#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll upper=LLONG_MAX;
vector<vector<ll> > nodes;
vector<unordered_map<ll,ll> > dict_arr;

void dfs(ll idx,vector<bool>& flag){
	flag[idx]=true;
	if(nodes[idx].size()==0){
		dict_arr[idx][1]=1;
	}
	ll size=nodes[idx].size(),val;
	for(int i=0;i<nodes[idx].size();i++){
		if(!flag[nodes[idx][i]]) dfs(nodes[idx][i],flag);
		for(auto x:dict_arr[nodes[idx][i]]){
			val=x.first*size;
			//if(val>upper) val=upper;
			dict_arr[idx][val]+=x.second;
		}
		
	}
}

/*
void solve(ll idx,ll w){
	double res=0,tmp_w=double(w);
	
	for(auto i:dict_arr[idx]){
		//cout<<i.first<<' '<<i.second<<endl;
		if(w%i.first!=0){
			res+=tmp_w/i.first*i.second;
		}
	}
	if(res-ll(res)>.5) res=ceil(res);
	else res=ll(res);
	cout<<res<<endl;
}*/

int main(){
	ll n,q,temp;
	cin>>n;
	vector<bool> flag(n+1,false);
	nodes.resize(n+1);
	dict_arr.resize(n+1);
	for(ll i=2;i<=n;i++){
		cin>>temp;
		nodes[temp].push_back(i);
	}
	cin>>q;
	ll w;
	double res=0,tmp_w;
	for(ll j=0;j<q;j++){
		cin>>temp>>w;
		if(!flag[temp]) dfs(temp,flag);
		tmp_w=double(w);
		res=0;
		for(auto i:dict_arr[temp]){
			if(w%i.first!=0){
				res+=tmp_w/i.first*i.second;
			}
		}
		if(res-ll(res)>.5) res=ceil(res);
		else res=ll(res);
		cout<<res<<endl;
	}
}















