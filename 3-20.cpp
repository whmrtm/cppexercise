#include <math>
#include <iostream>
#include <cstdlib>
#include "point.h"
using namespace std;

typedef struct node* link;
struct node{point p; link next;};

link **grid; int G; float d; int cnt = 0;
gridinsert(float x, float y){
	int i, j;  link s;
	int X = x*G + 1; int Y = y*G + 1;
	link t = new struct node;
	t->p.x = x; t->p.y = y;
	for(i = X-1; i <= X+1; i++){
		for(j = Y-1; j <= Y+1; j++)
			if(my_distance(s->p, t->p) < d) cnt++;
	}
	t->next = grid[X][Y]; grid[X][Y] = t;
}


int main(){
	
	int d, i, j, N;
	G = 1/d;
	grid = malloc2d(G+2, G+2);
	for(i = 0; i < G+2; i++)
		for(j = 0; j < G+2; j++)
			grid[i][j] = NULL;
	for(i = 0; i < N; i++){
		gridinsert(randFloat(), randFloat());
	}

	cout << cnt <<" edges shorter than " << d<< endl;
	return 0;
}
