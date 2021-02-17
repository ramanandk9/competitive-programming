#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		bool row[n+1],col[n+1];
		for(int i=0;i<n+1;i++){
			row[i]=false;
			col[i]=false;
		}
		int a,b;
		int count=0;
		bool extra=false;
		vector<pair<int,int> > arr;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			arr.push_back(make_pair(a,b));
			if(a==b) continue;
			else{
				count++;
				col[b]=true;
				row[a]=true;
			}
		}
		for(int i=0;i<m;i++){
			a=arr[i].first;
			b=arr[i].second;
			if(row[a]&& col[a] && row[b] && col[b]) {
				extra=true;
				break;
			}
		}
		
		if(extra) {
			count++;
		}
		cout<<count<<endl;
	}
}
