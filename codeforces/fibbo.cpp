#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(int& x,int c){
	c--;
	if(c==0) return 1;
	x++;
	return x*f(x,c);
}

int main(){
	int x=5,c=5;
	cout<<f(x,c);
}