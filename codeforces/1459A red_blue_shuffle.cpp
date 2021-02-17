#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		int red=0;
		int blue=0;
		for(int i=0;i<n;i++){
			if(a[i]<b[i]) blue++;
			else if(a[i]>b[i]) red++;
		}
		if(red==blue) cout<<"EQUAL";
		else if(red>blue) cout<<"RED";
		else cout<<"BLUE";
		cout<<endl;
	}
}