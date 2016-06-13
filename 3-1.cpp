#include <iostream>

using namespace std;

int main(){
	short int N = 100;
	while(N < 100000000000){
		N *= 10;
		cout << N << endl;
		if(N == 0)
			return 0;
	}
	return 0;
}
