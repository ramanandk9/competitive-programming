#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll x,y,k,n;
		cin>>x>>y>>k>>n;
		if(abs(x-y)%k==0){
			if((abs(x-y)/k)%2==0) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"NO";
		cout<<endl;
		
	}
}
