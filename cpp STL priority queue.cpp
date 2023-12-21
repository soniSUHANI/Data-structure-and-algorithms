#include <iostream>
#include <queue>
using namespace std;

int main(){
	//max heap initialisation
	priority_queue<int> maxi;
	
	//min heap initialisation
	priority_queue<int, vector<int>, greater<int>> mini;
	maxi.push(1);
	maxi.push(2);
	maxi.push(4);
	maxi.push(3);
	
	cout<<"maxi size "<<maxi.size()<<endl;
	int n = maxi.size();
	for(int i =0;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<"maxi size "<<maxi.size()<<endl;
	
	mini.push(5);
	mini.push(4);
	mini.push(2);
	mini.push(3);
	mini.push(1);
	
	int m = mini.size();
	for(int i=0;i<m;i++){
		cout<<mini.top()<<" ";
		mini.pop();
	}
	
	cout<<"empty or not "<<mini.empty()<<endl;
	return 0;
}
