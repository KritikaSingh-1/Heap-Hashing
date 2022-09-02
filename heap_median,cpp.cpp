#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>> pq;
priority_queue<int,vector<int>,greater<int>> pqm;

void insert(int x){
	if(pq.size()==pqm.size())
	{
		if(pq.size()==0){
			pq.push(x);
			return;
		}
		
		if(x<pq.top()){
			pq.push(x);
			return;
		}
		else{
			pqm.push(x);
			return;
			
		}
	}
	
	else{
		if(pq.size()>pqm.size()){
			if(x>=pq.top()){
				pqm.push(x);
			}
			else{
				int temp=pq.top();
				pq.pop();
				pq.push(x);
				pqm.push(temp);
			}
		}
		else{
			if(x<=pqm.top()){
				pq.push(x);
			}
			else{
				int temp=pqm.top();
				pqm.pop();
				pqm.push(x);
				pq.push(temp);
			}
		}
	}
}

double findMedian(){
	if(pqm.size() == pq.size()){
		return (pq.top() + pqm.top())/2.0;
	}
	else if(pqm.size()>pq.size()){
		return pqm.top();
	}
	else{
		return pq.top();
	}
	
}
	
int main(){
	insert(10);
	cout<<findMedian()<<endl;	
	insert(15);
	cout<<findMedian()<<endl;
	insert(21);
	cout<<findMedian()<<endl;
	insert(30);
	cout<<findMedian()<<endl;
	insert(18);
	cout<<findMedian()<<endl;
	insert(19);
	cout<<findMedian()<<endl;
		
    return 0;	
}