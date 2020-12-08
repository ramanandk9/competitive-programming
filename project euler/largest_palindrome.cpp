
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool palindrome(int n){
	int temp=0;
	int a=n;
	while(n>0){
		temp=temp*10+n%10;
		n/=10;
	}
	return a==temp;
}

int main(){
	int max_=0;
	for(int i=999;i>99;i--){
		for(int j=999;j>99;j--){
			if(palindrome(i*j)){
				max_=max(max_,i*j);
			}
		}
	}
	cout<<max_;
}