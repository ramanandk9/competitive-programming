#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}


//************ functions

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

ll pow(ll a,ll m){
	ll b=m-1;
	ll res=1;
	while(b){
		if(b&1) res=res*a%m;
		a=a*a%m;
		b>>=1;
	}
	return res;
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n,s,k;
		cin>>n>>s>>k;
		ll a,b,c;
		ll d=gcd(k,gcd(n-s,n));
		a=k/d;
		b=(n-s)/d;
		c=n/d;
		//cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
		if(gcd(a,c)!=1) cout<<-1;
		else{
			cout<<pow(a,c)*b%c;
		}
		cout<<endl;
	}
}
