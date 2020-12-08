// 600851475143
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a,int b){
	if(a%b==0) {
		//cout<<b<<endl;
		return b;
	}
	return gcd(b,a%b);
}
int lcm(int a,int b){
	//cout<<a<<'.'<<b<<endl;
	return (a*b)/gcd(a,b);
}

int main(){
	ll ans=1;
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		ans=lcm(ans,i);
	}
	cout<<ans;
}