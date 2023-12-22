#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(3);
	s.insert(4);
	s.insert(4);
	s.insert(0);
	s.insert(0);
	
	for(auto i :s){
		cout<<i<<endl;
	}cout<<endl;
	
	set<int>::iterator it = s.begin();
	it++;
	
	s.erase(it);
	for(auto i:s){
		cout<<i<<endl;
	}
	
	cout<<s.count(5)<<endl; //tells a particular element is present or not;
	
	set<int> iterator itr = s.find(5);
	
	
	for(auto it = itr;it!=s.end();it++){
		cout<<(*it)<<endl;
	}cout<<endl;
		
	return 0 ;
}
