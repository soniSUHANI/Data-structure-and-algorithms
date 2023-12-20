#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int basic[3]= {1,2,3} //normal array initialization
	array<int,4> a = {1,2,3,4}; //STL array initialization
	
	int size = a.size();
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
	cout<<"Element at 2nd Index "<<a.at(2)<<endl;
	cout<<"Empty or not "<<a.empty()<<endl;
	cout<<"The First element of array is "<<a.front()<<endl;
	cout<<"The last element of array is "<<a.back()<<endl;
	
	return 0;
}
