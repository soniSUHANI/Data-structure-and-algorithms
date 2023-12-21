#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<string> q;
	q.push("Soni");
	q.push("shruti");
	q.push("kavya");
	q.push("anisha");
	
	cout<<"size before pop "<<q.size()<<endl;
	cout<<"First Element "<<q.front()<<endl;
	q.pop();
	cout<<"size after pop "<<q.size()<<endl;
	cout<<"First Element "<<q.front()<<endl;
	
	return 0;
}
