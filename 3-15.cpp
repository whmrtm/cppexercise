
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	int N = 20;
	string test("the");
	string a("whatthefuck");
	string::size_type i, j;
	for(i = 0; a[i] != 0; i++){
		for(j = 0; test[j] != 0; j++){
			if(a[i+j] != test[j]) break;
		}
		if(j == test.size()){
			cout << "Exist! " << "index: " << i << endl; 
			break;
		}
	}

	return 0;
}
