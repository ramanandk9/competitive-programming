#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int count_=0;
vector<int> global{1};
vector<vector<int> > graph;

void bfs(){
	vector<int> temp;
	for(int i=0;i<global.size();i++){
		for(int j=0;j<graph[global[i]].size();j++){
			temp.push_back(graph[global[i]][j]);
		}
	}
	if(global.size()%2==1) count_++;
	if(temp.size()==0) return;
	global=temp;
	bfs();
}

int main(){
	int n;
	cin>>n;
	int temp;
	vector<int> tmp;
	for(int i=0;i<=n;i++){
		graph.push_back(tmp);
	}
	for(int i=2;i<=n;i++){
		cin>>temp;
		graph[temp].push_back(i);
	}
	bfs();
	cout<<count_;
}
