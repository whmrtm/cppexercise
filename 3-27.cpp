
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node* link;
struct node{int item; link next;};

// Swith elements in the Linked list, Typical!

int main(){
	int i,N;
	N = 10; 
	link t = new struct node;
	link x = t;
	t->item = 1;
	t->next = t;

	for(i = 2; i < N; i++){
		x = (x->next = new struct node);
		x->item = i;
		x->next = t;

	}
	t = x->next->next;
    x = x->next->next->next->next;
	int init = x->item;


	cout << t->item << " " << init << endl;
	
	link nt = t->next;
	link nx= x->next;
	link nnt = nt->next;
	
	t->next = nx;

	nt->next = nx->next;
	x->next = nt;
	nx->next = nnt;
	while(x->item != 1){
		x = x->next;
	}
	cout << x->item << endl;
	x = x->next;
	while(x->item != 1){
		cout << x->item << endl;
		x = x->next;
	}
	return 0;
}
