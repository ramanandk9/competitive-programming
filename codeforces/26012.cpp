#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     cin>>n;
		 bool flag=false;
		 for(int i=0;2021*i<=n;i++){
			 if((n-2021*i)%2020==0) {
				 flag=true;
				 break;
			 }
		 }
		 if(flag) cout<<"YES"<<endl;
		 else cout<<"NO"<<endl;
	}
}