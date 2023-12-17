#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	int mid = (start+(end-start)/2);
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
		}
		
		if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end = mid-1;
		}
		
		mid = (start+(end-start)/2);
	}
	return -1;
}

int main(){
	int even[6]={2,3,4,6,12,15};
	int odd[5]={3,7,4,23,56};
	
	int index = binarySearch(even,6,15);
	cout<<"index of 15 is "<<index<<endl;
	
	int index2 = binarySearch(odd,5,23);
	cout<<"index2 is "<<index2<<endl;
}
