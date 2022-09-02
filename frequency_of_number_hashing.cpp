#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	
	unordered_map<int,int> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	return 0;
}