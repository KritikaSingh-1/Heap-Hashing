#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	map<int,int,greater<int>> m;
	for(int i=0;i<n;i++){
		if(m[a[i]]==0){
			
			k--;
		}
		m[a[i]]++;
		if(k<=0){
			break;
		}
	}
	
	map<int,int,greater<int>> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	return 0;
}