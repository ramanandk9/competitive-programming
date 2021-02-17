#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sort_(ll& a,ll& b,ll& c){
	if(a<b){
		if(b<c) return;
		b=b+c;
		c=b-c;
		b=b-c;
	}
	a=a+b;
	b=a-b;
	a=a-b;
	if(c<b){
		b=b+c;
		c=b-c;
		b=b-c;
	}
	else if(c<a){
		a=a+c;
		c=a-c;
		a=a-c;
	}
}
int main(){
	ll n;
	cin>>n;
	ll sum=0;
	ll temp;
	set<ll> s;
	set<ll>::iterator itr;
	ll a,b,c;
	for(ll i=0;i<n;i++){
		cin>>temp;
		s.insert(temp);
	}
	if(s.size()==1 || s.size()==3) {
		if(s.size()==1) cout<<"YES";
		else{
			itr=s.begin();
			a=*itr;
			itr++;
			b=*itr;
			itr++;
			c=*itr;
			sort_(a,b,c);
			if(a-b==b-c) cout<<"YES";
			else cout<<"NO";
		}
	}
	else if(s.size()==2){
		itr=s.begin();
		a=*itr;
		itr++;
		b=*itr;
		if((a-b)%2==0) cout<<"YES";
		else cout<<"NO";
		//cout<<a<<' '<<b;
	}
	else cout<<"NO";
}
