#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
     while(n%2==0) n>>=1;
	 if(n>1) return true;
     return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     cin>>n;
	     if(n%2==1 || check(n)) cout<<"YES"<<endl;
	     else cout<<"NO"<<endl;
	}
}