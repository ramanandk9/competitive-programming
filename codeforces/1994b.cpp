#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

void arrange(ll t,ll& u,ll& r,ll& d,ll& l){
	if(t==0){
		if(r>0){
			u--;
			r--;
		}
	}
	else if(t==1){
		if(d>0){
			r--;
			d--;
		}
	}
	else if(t==2){
		if(l>0){
			d--;
			l--;
		}
	}
	else{
		if(u>0){
			u--;
			l--;
		}
	}
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n,u,r,d,l;
		cin>>n>>u>>r>>d>>l;
		bool flag=true;
		vector<pair<ll,ll> > arr;
		arr.push_back({u,0});
		arr.push_back({r,1});
		arr.push_back({d,2});
		arr.push_back({l,3});
		sort(arr.begin(),arr.end());
		for(int i=0;i<4;i++) arrange(arr[3-i].second,u,r,d,l);
		if(u>n-2 || r>n-2 || l>n-2 || d>n-2) flag=false;
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
