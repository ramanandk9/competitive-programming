
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n;
	cin>>n;
	ll ans=((3*n*(n + 4) -pow((-1),n)*(n*(n + 4)+2)+10)/8);
	cout<<ans;
}