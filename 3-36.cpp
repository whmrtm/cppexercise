
#include "list.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	link head = new node;
	link x = new node;
	int i,N;
	N = 10;

	head->next = x;
	head->item = 1;
	for(i = 2; i <= N; i++){
		x->item = i;
		x = (x->next = new struct node);
		x->next = NULL;
	}

	x = head;
	while(x != NULL){
		cout << x->item << " ";
		x = x->next;
	}
	cout << endl;
	link b = new node;
	b->item = -1;
	link bhead = b;

	link curr = head;
	while(curr->next != NULL){
		b->next= curr->next;
		curr->next = curr->next->next;
		curr = curr->next;
		b = b->next;
		b->next = NULL;
	}

	curr->next = bhead->next;
	x = head;	
	while(x != NULL){
		cout << x->item << " ";
		x = x->next;
	}
	return 0;


}
