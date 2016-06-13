#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

// quick find method
#define N 100
int main(){
  int a[N];
  int p,q,t;
  int i = 0, j = 0;
  for(; i < N; i++){
    a[i] = i;
  }
  while(cin >> p >> q){
    if(a[p] == a[q]){
		for(j = 0;j<N;j++){
			if(a[j]==a[p]) cout << j<< " ";
		}		 
            cout << endl;	    	    
	    continue;
    }
    for(t = a[p], i = 0; i < N; i++){
    	if(a[i] == t) a[i] = a[q];
    }
  }
  return 0;


}
