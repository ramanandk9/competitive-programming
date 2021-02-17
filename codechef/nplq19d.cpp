#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string s){
	bool flag[26];
	for(int i=0;i<26;i++) flag[i]=false;
	string res="";
	for(int i=0;i<s.length();i++){
		if(flag[s[i]-96]) continue;
		else{
			flag[s[i]-96]=true;
			res+=s[i];
		}
	}
	cout<<res<<endl;
}

int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		solve(s);
	}
}
