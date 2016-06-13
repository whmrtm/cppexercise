#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <deque>

// 为双端队列ADT

using namespace std;

void print(int num){
  cout << num << " ";
}

int main(){
  deque<int> v;
	deque<int>::iterator iv;

	v.assign(10,2);

	cout << v.size() << endl;


	v.push_front(666);
	for(int i = 0; i < 10; ++i){
		v.push_back(i);
	
	}
  for_each(v.begin(),v.end(),print);

	cout << endl;
	cout << v.size() << endl;

	cout << endl;

	v.insert(v.begin()+3, 99);
	v.insert(v.end()-3, 99);

	for_each(v.begin(), v.end(), print);
	cout << endl;

	for_each(v.rbegin(),v.rend(),print);
	cout << endl;


	for(iv=v.begin(); iv != v.end(); ++iv)
		cout << *iv << " ";

	cout << endl;
	cout << endl;
	
	//delete
	//
	v.erase(v.begin() + 3);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	v.insert(v.begin()+3, 99);


	v.erase(v.begin(),v.begin()+3);
	for_each(v.begin(), v.end(), print);
	cout << endl;


	v.clear();
	cout << v.size() << endl;
	for_each(v.begin(),v.end(), print);



	return 0;
}
