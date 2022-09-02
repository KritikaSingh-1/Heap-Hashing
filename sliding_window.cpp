#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int f=0;
	int ans=INT_MAX;
	for(int i=0;i<k;i++){
		f+=a[i];
	}
	ans=min(ans,f);
	
	for(int i=1;i<n-k+1;i++){
		f-=a[i-1];
		f+=a[i+k-1];
		ans=min(ans,f);
	}
	cout<<ans<<endl;
	
	return 0;
}