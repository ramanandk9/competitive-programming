#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,x,ans=0;
	cin>>n>>x;
	vector<ll> arr;
	ll temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(x>1){
			ans+=x*arr[i];
		}
		else ans+=arr[i];
		x--;
	}
	cout<<ans;
	
}
