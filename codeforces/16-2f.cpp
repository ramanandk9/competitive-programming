#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bin_search(vector<pair<ll,ll> > arr,ll l,ll r,ll temp){
	ll mid=(l+r)/2;
	if(l==r) return arr[l].second;
	if(arr[mid].first>=temp){
		if(mid>l){
			if(arr[mid-1].first>=temp) bin_search(arr,l,mid-1,temp);
			else return arr[mid].second;
		}
		return arr[mid].second;
	}
	return bin_search(arr,mid+1,r,temp);
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		vector<pair<ll,ll> > arr;
		ll sum=0;
		ll temp,max_val=LLONG_MIN;
		for(ll i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
			max_val=max(max_val,sum);
			arr.push_back(make_pair(sum,i));
		}
		sort(arr.begin(),arr.end());
		ll x,y,time_consumed;
		for(ll i=0;i<m;i++){
			cin>>temp;
			//cout<<'.'<<temp<<endl;
			if(sum<=0) cout<<-1<<' ';
			else{
				x=0;
				if(temp>max_val) x=(temp-max_val)/sum;
				time_consumed=x*n;
				temp=temp-x*sum;
				if(temp>max_val) {
					time_consumed+=n;
					temp-=sum;
					if(temp>max_val){
						time_consumed+=n;
						temp-=x;
					}
				}
				time_consumed+=bin_search(arr,0,n-1,temp);
				cout<<time_consumed<<' ';
			}
		}
		cout<<endl;
	}
}