// 600851475143
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(int n){
	for(int i=3;i<n;i+=2) if(n%i==0) return false;
	return true;
}

int main(){
	ll n=600851475143;
	ll temp=sqrt(n),ans;
	for(int i=temp;i>=2;i--){
		if(n%i==0 && prime(i)) {
			ans=i;
			break;
		}
	}
	cout<<ans;
}