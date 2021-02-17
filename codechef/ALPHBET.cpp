#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s,temp;
	cin>>s;
	int n;
	cin>>n;
	bool arr[260];
	for(int i=0;i<260;i++) arr[i]=false;
	for(int i=0;i<s.length();i++) arr[s[i]]=true;
	int count=0;
	bool flag;
	for(int i=0;i<n;i++){
		cin>>temp;
		flag=true;
		for(int j=0;j<temp.length();j++){
			if(arr[temp[j]]==false){
				flag=false;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}
