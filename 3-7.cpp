
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int head(){
	return rand() < RAND_MAX/2;	
}



int main(){
	int i, j, cnt;
	int N = 32, M = 1000;
	int f[N];
	
	for(j = 0;j <= N; j++){
		f[j] = 0;
	}	
	for(i = 0; i < M;i++, f[cnt]++){
		for(cnt = 0, j = 0; j <= N; j++){
			if(head()) cnt++;
		}
	}

	for(j = 0; j <= N ;j++){
		cout << j << " ";
		for(i = 0;i < f[j]; i += 5)
			cout << "*";
		cout << endl;
	}
	return 0;
}
