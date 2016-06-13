
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;
void printnode(char c, int h){
  int i;
	for (i = 0; i < h; i++){
    printf(" ");
		printf("%c\n",c);

	}
}
void show(link x, int h)
{
  if( x == NULL) {
    printnode("*", h); return;
	
	}
	show(x->r, h+1);
	printnode(x->item,h);

}
int main(){
    
	return 0;
}
