#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll val=0;

bool check(ll n){
	ll temp=n;
	ll digit;
	while(temp>0){
		digit=temp%10;
		temp=temp/10;
		if(digit==0) continue;
		if(n%digit!=0) {
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(;;n++){
			if(check(n)) break;
		}
		cout<<n<<endl;
	}
}
