#include <iostream>
#include <vector>

using namespace std;
int main(){
	int N = 100;
	int i,j, p, q, t, id[N]; 
	for(i = 0; i < N; i++) 
		id[i] = i;
	while(cin >> p >> q){
		for(i = p; i != id[i]; i = id[i]); 
		for(j = q; j != id[j]; j = id[j]);
		if(i == j) continue;
		id[i] = j;
		for(i = 0 ; i < 10; i++){
			cout << id[i] << " ";
		}

		cout << endl;
	}

	return 0;
}
