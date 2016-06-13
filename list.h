typedef struct node* link;
struct node{int item; link next;};

typedef link Node;
void iniNodes(int);
link newNode(int);
void freeNode(link);
void insertNode(link, link);
link deleteNext(link);
link Next(link);
link Item(link);
