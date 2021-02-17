#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string s){
	int arr[260];
	int ind;
	bool flag=true;
	for(int i=0;i<260;i++) arr[i]=0;
	if(s.length()<3) cout<<"Dynamic";
	else{
		for(int i=0;i<s.length();i++){
			arr[s[i]]++;
		}
		sort(arr,arr+26);
		ind=0;
		while(arr[ind]==0) ind++;
		ind+=2;
		for(;ind<26;ind++){
			if(arr[ind]==arr[ind-1]+arr[ind-2]) continue;
			else{
				flag=false;
				break;
			}
		}
		if(flag) cout<<"Dynamic";
		else cout<<"Not";
	}
	cout<<endl;
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
