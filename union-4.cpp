

#include <iostream>
#include <vector>

using namespace std;
int main(){
	int N = 100;
	int i,j, p, q, t, id[N],sz[N]; 
	for(i = 0; i < N; i++){
		id[i] = i;
		sz[i] = 1;
	}	
	while(cin >> p >> q){
		for(i = p; i != id[i]; i = id[i]) 
			id[i] = id[id[i]];
		for(j = q; j != id[j]; j = id[j])
			id[j] = id[id[j]];
		if(i == j) continue;
		if(sz[i] < sz[j]){
			id[i] = j; sz[j] += sz[i];
		} else {
			id[j] = i; sz[i] += sz[j];
		}
		for(i = 0 ; i < 10; i++){
			cout << id[i] << " ";
		}

		cout << endl;
	}

	return 0;
}
