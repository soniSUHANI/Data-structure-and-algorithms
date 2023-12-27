#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n ";
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			int temp = arr[i];
			arr[i]==arr[i+1];
			arr[i+1]=temp;
		}
	}
	
	cout<<"Sorted array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
