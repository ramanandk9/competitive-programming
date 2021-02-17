#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll greatest(ll a,ll b,ll c,ll n){
	if(c0>n/3) {
		if(c2>n/3) return 2;
		return 0;
	}
	if(c1>n/3) return 1;
	if(c2>n/3) return 2;
	 return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     cin>>n;
	     ll temp,count=0;
	     ll c0=0,c1=0,c2=0;
	     for(int i=0;i<n;i++){
	          cin>>temp;
	          temp=temp%3;
	          if(temp==0) c0++;
	          else if(temp==1) c1++;
	          else c2++;
	     }
	     temp=greatest(c0,c1,c2);
	     if(temp==0){
	          count+=c0-n/3;
	          c1+=c0-n/3;
	          if(c1>n/3){
	               count+=c1-n/3;
	          }
	     }
	     if(temp==1){
	          count+=c1-n/3;
	          c2+=c1-n/3;
	          if(c2>n/3) count+=c2-n/3;
	     }
	     if(temp==2){
	          count+=c2-n/3;
	          c0+=c2-n/3;
	          if(c0>n/3) count+=c0-n/3;
	 
	     }
	     cout<<count<<endl;
	}
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	map<ll,ll> dict;
	for(int i=1;i<=10000;i++){
		dict[i*i*i]=1;
	}
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     cin>>n;
	     ll temp,root;
	     root=cbrt(n);
	     ll val;
	     bool flag=false;
	     if(root*root*root==n) root--;
	     for(int i=1;i<=root;i++){
	          if(dict[n-i*i*i]==1){
				  flag=true;
				  break;
			  }
	     }
	     if(flag) cout<<"YES"<<endl;
	     else cout<<"NO"<<endl;
	}
}