#include<bits/stdc++.h>
using namespace std;


void make_tree(int l,int r,vector<int> arr,int depth,vector<int>& depth_arr){
	int idx=l;
	int temp=arr[l];
	for(int i=l+1;i<=r;i++){
		if(arr[i]>temp){
			temp=arr[i];
			idx=i;
		}
	}
	depth_arr[idx]=depth;
	if(idx>l) make_tree(l,idx-1,arr,depth+1,depth_arr);
	if(idx<r) make_tree(idx+1,r,arr,depth+1,depth_arr);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp;
		vector<int> arr,depth_arr(n,0);
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(temp);
		}
		make_tree(0,n-1,arr,0,depth_arr);
		for(int i=0;i<n;i++) cout<<depth_arr[i]<<' ';
		cout<<endl;
	}
}