#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node* link;
struct node{int item; link next;};


int main(){
	int i,N,M;
	cin >> N;	cin >> M;
	link t = new struct node;
	link x = t;
	t->item = 1;
	t->next = t;

	for(i = 2; i < N; i++){
		x = (x->next = new struct node);
		x->item = i;
		x->next = t;

	}

	while(x != x->next){
		for(i = 1;i < M;i++){
			x = x->next;
		}
		x->next = x->next->next;
		N--;
		cout << N << endl;
		cout << x->item << endl;
	}	
	return 0;
}
