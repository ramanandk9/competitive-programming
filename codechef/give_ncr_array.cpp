#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void printv(vector<ll> arr){
	for(auto i:arr) cout<<i<<' ';
}

vector<ll> give_ncr_array(ll n,ll mod){
	vector<ll> arr;
	arr.push_back(1);
	ll temp=1;
	for(ll i=1;i<=n;i++){
		temp=((temp*(n-i+1))/i)%mod;
		arr.push_back(temp);
	}
	printv(arr);
	//cout<<1;
	return arr;
}

int main(){
	vector<ll> a;
	ll n;
	cin>>n;
	a=give_ncr_array(n,998244353);
}