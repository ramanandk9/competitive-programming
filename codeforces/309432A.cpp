#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string yes="Yes",no="No";
int main(){
	int n=8;
	string s;
	char c;
	bool flag=false;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=1;j<n;j++){
			if(s[j]==s[j-1]) {
				flag=true;
				break;
			}
		}
	}
	if(flag) cout<<no;
	else cout<<yes;
}
