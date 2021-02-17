#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=n-1;i>=0;i--){
			if(s[i]==')') count++;
			else break;
		}
		if(count>n-count) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
