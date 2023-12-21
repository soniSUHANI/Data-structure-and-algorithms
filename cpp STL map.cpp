#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int,string> m;
	m[1]="soni";
	m[3]="shruti";
	m[2]="kavya";
	
	m.insert({5,"anisha"});
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	cout<<"finding 5 "<<m.count(5)<<endl;
	
	m.erase(5);
	cout<<"after erase "<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	auto it = m.find(5);
	for(auto i:it;i!=m.end();i++){
		cout<<(*i).first<<endl;
	}
	
	return 0;
}
