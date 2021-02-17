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
		ll n;
		cin>>n;
		vector<int> deg(n,0),result,weights,heap;
		vector<pair<int,int> > edges;
		int sum=0,temp,a,b;
		for(int i=0;i<n;i++){
			cin>>temp;
			weights.push_back(temp);
			sum+=temp;
		}
		for(int i=0;i<n-1;i++){
			cin>>a>>b;
			a--;b--;
			deg[a]++;
			deg[b]++;
			edges.push_back(make_pair(a,b));
		}
		for(int i=0;i<n-1;i++){
			a=edges[i].first;
			b=edges[i].second;
			temp=0;
			if(deg[a]>1) {
				temp+=weights[a];
				deg[a]--;
			}
			if(deg[b]>1) {
				temp+=weights[b];
				deg[b]--;
			}
			heap.push_back(weights[a]+weights[b]);
		}
		sort(heap.rbegin(),heap.rend());
		result.push_back(sum);
		for(int i=0;i<n-1;i++){
			sum+=heap[i];
			result.push_back(sum);
		}
		for(int i=0;i<n;i++){
			cout<<result[i]<<' ';
		}
		cout<<endl;
	}
}
