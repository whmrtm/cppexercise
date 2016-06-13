
#include "list.h"
#include <iostream>
#include <cstdlib>

// Delete even positions elements
using namespace std;

int main(){
	link head = new node;
	link x = new node;
	int i,N;
	N = 15;

	head->next = x;
	head->item = 1;
	for(i = 2; i < N; i++){
		x->item = i;
		x = (x->next = new struct node);
		x->next = NULL;
	}
	x->item = N;
	
	x = head;
	link t = head;
	do{
		cout << x->item << endl;
		x = x->next;
	}while(x != NULL);
	
	x = head;
	
	while(x->next != NULL){
		link t = x->next;
		x->next = t->next;
		delete t;	
		x = x->next;	
	}

	cout << endl;	
	x = head;
	do{
		cout << x->item << endl;
		x = x->next;
	}while(x != NULL);
	

	return 0;
}
