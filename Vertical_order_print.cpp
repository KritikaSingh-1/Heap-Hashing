#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}	
};

void getVerticalOrder(Node* n,int hd,map<int,vector<int>> &m){
	if(n==NULL){
		return;
	}
	m[hd].push_back(n->data);
	getVerticalOrder(n->left,hd-1,m);
	getVerticalOrder(n->right,hd+1,m);
}

int main(){
	Node* n=new Node(10);
	n->left=new Node(7);
	n->right=new Node(4);
	n->left->left=new Node(3);
	n->left->right=new Node(11);
	n->right->left=new Node(14);
	n->right->right=new Node(6);
	
	map<int,vector<int>> m;
	
	int hd=0;
	
	getVerticalOrder(n,hd,m);
	
	map<int,vector<int>> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(int i=0;i<(it->second).size();i++){
			cout<<(it->second)[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}