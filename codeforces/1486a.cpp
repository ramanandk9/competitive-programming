#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     cin>>n;
	     ll sum,temp;
	     sum=0;
	     bool flag=true;
	     for(ll i=0;i<n;i++){
	          cin>>temp;
	          sum=sum+temp-i;
	          if(sum<0) {
	               break;
	          }
	     }
	     if(sum>=0) cout<<"YES"<<endl;
	     else cout<<"NO"<<endl;
	}
}
