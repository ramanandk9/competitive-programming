#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(int n){
	for(int i=3;i<n;i+=2) if(n%i==0) return false;
	return true;
}

int main(){
	int count=2;
	int ans=3;
	while(count<10001){
		ans+=2;
		if(prime(ans)) count++;
	}
	cout<<ans;
}