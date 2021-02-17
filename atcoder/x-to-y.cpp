#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,m;
	cin>>n>>m;
	ll temp;
	ll h;
	h=(3+sqrt(abs(9-16*n+8*m)))/2;
	vector<ll> arr(h+1,1);
	if(m<2*n-1 || m>(n*(n+1))/2) cout<<-1;
	else if(n>1){
		m-=(h*(h+1))/2;
		n-=h;
		for(ll i=h;i>2 && n>0;i--){
			temp=((m-2*n)/(i-2));
			m-=temp*i;
			n-=temp;
			arr[i]+=temp;
		}
		arr[2]+=n;
		temp=1;
		for(ll i=2;i<=h;i++){
			for(ll j=0;j<arr[i];j++) cout<<temp<<' '<<temp+j+1<<endl;
			temp+=arr[i];
		}
		
	}
}