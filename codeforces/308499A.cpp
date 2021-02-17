#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		int max_=max(a,max(b,c));
		int diff=3*max_-a-b-c;
		if(n>=diff){
			n-=diff;
			if(n%3==0) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"NO";
		cout<<endl;
		
	}
}
