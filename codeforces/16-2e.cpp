#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll temp,sum=0;
		vector<pair<ll,ll> > arr;
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(make_pair(temp,i));
		}
		sort(arr.begin(),arr.end());
		set<ll> s;
		for(int i=0;i<n;i++){
			if(sum<arr[i].first)
				s.clear();
			s.insert(arr[i].second);
			sum+=arr[i].first;
		}
		cout<<s.size()<<endl;
		for(auto i:s) cout<<i+1<<' ';
		cout<<endl;
	}
}