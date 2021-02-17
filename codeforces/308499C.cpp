#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	int arr[8];
	int temp;
	for(int i=0;i<8;i++) arr[i]=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr[temp]++;
	}
	if(arr[5] || arr[7] || arr[1]!=n/3 || arr[2]+arr[3]!=n/3 || arr[4]+arr[6]!=n/3 || arr[2]<arr[4]) cout<<-1;
	else{
		for(int i=0;i<n/3;i++){
			cout<<1<<' ';
			if(arr[2]) {
				cout<<2<<' ';
				arr[2]--;
			}
			else{
				cout<<3<<' ';
			}
			if(arr[4]!=0){
				cout<<4<<' ';
				arr[4]--;
			}
			else cout<<6;
			cout<<endl;
		}
	}
}
