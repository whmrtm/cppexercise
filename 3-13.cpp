
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int N = 1000;
	int sum, i, j, a[N];
	
	for(i = 0; i < N; i++){
		a[i] = 1;
	}

	for(i = 2; i < N; i++){
		if(a[i]){
			for(j = i; j < N/i; j++){
				a[i*j] = 0;
			}			
		}
	}


	for(j = 0; j < 1000; j += 20){
		sum = 0;
		cout << j << " ";
		for(i = 2; i < j; i++){
			if(a[i]){
				sum += 1;
				if(sum > 3){
					cout << "*";
					sum = 0;
				}
				//cout << i << endl;	
			}
		}
		
		cout << endl;
	}
		return 0;
}
