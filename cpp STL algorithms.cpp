#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	vector<int> v;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(6);
	v.push_back(7);
	
	cout<<"finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
	
	cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
	cout<<"upper bound "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
	
	int a= 6;
	int b= 9;
	
	cout<<"max-> "<<max(a,b)<<endl;
	cout<<"min-> "<<min(a,b)<<endl;
	
	swap(a,b);
	cout<<"a-> "<<a<<endl;
	
	string s = "soni";
	reverse(s.begin(),s.end());
	cout<<"string-> "<<s<<endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}cout<<endl;
	
	sort(v.begin(),v.end());
	cout<<"after sorting "
	for(int i:v){
		cout<<i<<" ";
	}cout<<endl;
	
	return 0;
}
