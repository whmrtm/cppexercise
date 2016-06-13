#include <iostream>
#include <string>


struct LinkNode{

	int item;
	LinkNode *next;
	LinkNode *pre;

};


class LinkList{
	private:
		LinkNode *head0, *head1;
		LinkNode *curr;
		LinkNode *result;
	public:
		LinkList();
		~LinkList();
		void Create();
		void Add();
		void Display();
		void addtwo();

};

