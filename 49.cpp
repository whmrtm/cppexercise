#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
	int M  = 1000;
	int N = 1000;
	int i,j,r,res = 0;

	vector<int> myarray;

	for(i = 0; i < M; i++){
		r = rand() % 1000;
		cout << r << " ";
		myarray.push_back(r);
	}
		cout << endl;
	for(i = 0; i < N; i++){
		r = rand() % 1000;
		cout << r << " ";	
	   	for(j = 0; j < M; j++){
			if(r == myarray[j]){
				res += 1;
				break;
			}
		}
	}
	cout << endl;
	cout << res << endl;
	return 0;
}
