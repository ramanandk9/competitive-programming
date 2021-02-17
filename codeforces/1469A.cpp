#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

bool regular(stack<char> st){
	stack<char> s;
	while(!st.empty()) {
		s.push(st.top());
		st.pop();
	}
	while(!s.empty()){
		if(s.top()=='(') {
			st.push(s.top());
			s.pop();
		}
		else if(s.top()=='?'){
			if(st.empty()) {
				st.push(s.top());
				s.pop();
			}
			else{
				st.pop();
				s.pop();
			}
		}
	}
	return st.empty();
	
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		char c;
		bool flag=true;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(' || s[i]=='?') st.push(s[i]);
			else{
				if(st.top()=='(' || st.top()=='?') st.pop();
				else {
					flag=false;
					break;
				}
			}
		}
		if(st.size()%2==1) flag=false;
		else{
			flag=regular(st);
		}
		if(flag) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
