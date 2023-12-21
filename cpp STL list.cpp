#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> l;//initialisation
	
	l.push_back(1);
	l.push_front(2);
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	l.erase();
	cout<<"After erase "<<endl;
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<"Size of list "<<l.size()<<endl;
	
	
}
