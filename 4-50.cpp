#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


class filo_stack_ll{
	public:
    int get_top(){
			return stack.back();
		}
		int stack_exist(int item){
			iter = stack.begin();
			while(iter != stack.end()){
				if(*(iter++) == item)
					return 1;
				
			}
			return 0;
		}
		void my_push(int a){
			if(!stack_exist(a))
			  stack.push_back(a);
		}
		int get_pop(){
			int top = stack.back();
			stack.pop_back();
			return top;
		}
		void my_print(){
			for(int i = 0; i < stack.size(); i++)
				cout << stack[i] << " ";
			cout << endl;
		}
	private:
    vector<int> stack;
		vector<int>::iterator iter;
};

int main(){
  filo_stack_ll my_stack;
	my_stack.my_push(1);
	my_stack.my_push(2);
	my_stack.my_push(3);
	my_stack.my_push(4);
	my_stack.my_push(5);
	my_stack.my_push(2);
	my_stack.my_print();
	return 0;
}
