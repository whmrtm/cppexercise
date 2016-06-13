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
		x->item = rand()%20;
		x = (x->next = new struct node);
		x->next = NULL;
	}
	
	x = head;
	link t = head;
	do{
		cout << x->item << endl;
		x = x->next;
	}while(x != NULL);
	
	x = head->next;
	while(x->next != NULL){
		if(x->next->item > t->next->item)
			t = x;		
		x = x->next;
	}

	if(t->next->item < head->item){
		cout << "head max" << endl;
	}
//	cout << "t " << t->item <<endl;
	x->next = t->next;
	t->next = t->next->next;
	
	x->next->next = NULL;
	
//	t->next = t->next->next;
	

	x = head;
	cout << endl;
	do{
		cout << x->item << endl;
		x = x->next;
	}while(x != NULL);
	return 0;
}
