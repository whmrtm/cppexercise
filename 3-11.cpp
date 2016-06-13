
#include <iostream>
#include <cstdlib>

// Table sort illustration

using namespace std;

typedef struct node* link;
struct node{int item; link next;};

struct node heada,headb;
link t, u, x, a = &heada, b;


int main(){
	int i, N;
	N = 1000;
	for(i = 0, t = a; i < N; i++){
		t->next = new struct node;
		t = t->next; t->next = NULL;
		t->item = rand()%1000;

	}	

	b = &headb; b->next = NULL;

	for(t = a->next; t!= NULL; t = u){
		u = t->next;
		for(x = b; x->next != NULL; x = x->next){
			if(x->next->item > t->item){
				break;
			}
			t->next = x->next; x->next = t;
		}

	}
	return 0;
}
