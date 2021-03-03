#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

void check_bracket_sequence(string s){
	stack<char> temp;
	char tmp='.';
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') temp.push(s[i]);
		else {
			if(temp.empty()) return;
			temp.pop();
		}
	}
	if(temp.empty()) flag=true;
}

void check(string s,char a,char b,char c){
	string temp="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='A') temp=temp+a;
		else if(s[i]=='B') temp+=b;
		else temp+=c;
	}
	check_bracket_sequence(temp);
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		flag=false;
		ll n;
		string s;
		cin>>s;
		n=s.length();
		int a=0,b=0,c=0;
		for(int i=0;i<n;i++){
			if(s[i]=='A') a++;
			else if(s[i]=='B') b++;
			else c++;
		}
		if(a==b+c){
			if(s[0]=='A'){
				check(s,'(',')',')');
			}
			else check(s,')','(','(');
		}
		else if(b==a+c){
			if(s[0]=='B') check(s,')','(',')');
			else check(s,'(',')','(');
		}
		else if(c==a+b){
			if(s[0]=='C') check(s,')',')','(');
			else check(s,'(','(',')');
		}

		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
