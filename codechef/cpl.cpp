#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int c=0;
bool flag=false;
set<pair<int,int> > new_set(set<pair<int,int> > s,int a,int k){
	int x,y;
	set<pair<int,int> > s2;
	for(auto i: s){
		x=i.first;
		y=i.second;
		if(x<k){
			s2.insert(make_pair(x+a,y));
			if(y+a<=x) s2.insert(make_pair(x,y+a));
			else s2.insert(make_pair(y+a,x));
		}
		else if(y<k){
			if(y+a>=x) {
				flag=true;
				break;
			}
			s2.insert(make_pair(x,y+a));
		}
		if(x>=k && y+a>=k) {
			flag=true;
			break;
		}
	}
	c++;
	return s2;
}

int main(){
	FASTIO;
	int t;
	cin>>t;
	while(t--){
		int n,k;
		c=0;
		flag=false;
		cin>>n>>k;
		vector<int> arr;
		set<pair<int,int> > s;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(temp);
		}
		sort(arr.rbegin(),arr.rend());
		s.insert(make_pair(0,0));
		for(int i=0;i<n;i++){
			if(flag) break;
			s=new_set(s,arr[i],k);
		}
		if(flag) cout<<c<<endl;
		else cout<<-1<<endl;
	}
}

// 1 8 38 7 7 7 7 8 10 19 20
