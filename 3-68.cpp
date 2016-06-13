
#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct node* link;
struct node{int v; link next;};


link newnum(int v, link next){
	link x = new struct node;
	x->v = v; x->next = next;
	return x;
}
int main(){
	// First build a matrix using linked table
	int i, j, N = 5;
	link adj[N];
	for(i = 0; i < N; i++){
		adj[i] = NULL;
	}

		adj[0] = newnum(2,adj[0]);
		adj[1] = newnum(4,adj[0]);
		adj[2] = newnum(0,adj[0]);
		adj[4] = newnum(1,adj[0]);

	// Then tranform it into a matrix
	
	int a[N][N];

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			(i==j) ? a[i][j] = 1: a[i][j] = 0;
	for(i = 0; i < N; i++){
		while(adj[i]){
			a[i][adj[i]->v] = 1;
			adj[i] = adj[i]->next;
		}
	}

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
