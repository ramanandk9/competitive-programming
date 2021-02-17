#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b){
	if(b==0) return a;
	if(a%b==0) return b;
	return gcd(b,a%b);
}

int main(){
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		vector<ll> arr;
		ll temp,gcd_;
		cin>>temp;
		gcd_=temp;
		for(int i=1;i<m;i++){
			cin>>temp;
			gcd_=gcd(gcd_,temp);
		}
		if(gcd_%n!=0) gcd_=gcd_%n;
		else gcd_=n;
		cout<<n-gcd_<<endl;
	}
}
