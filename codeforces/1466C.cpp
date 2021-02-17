#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		s='.'+s;
		int count=0;
		vector<bool> flag(s.length()+1,false);
		for(int i=2;i<s.length()+1;i++){
			if(!flag[i-1]){
				if(s[i]==s[i-1]){
					flag[i]=true;
					count++;
					continue;
				}
			}
			if(!flag[i-2]){
				if(s[i]==s[i-2]){
					flag[i]=true;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
