#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>
using namespace std;


int main(){
	vector<string> mystack;
	vector<string> mystack1;
	string::size_type index = 0;
	string post_cal = "5 9 * 8 7 4 6 + * 2 1 3 * + * + *";
//	cin >> post_cal;
	istringstream iss(post_cal);
  copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
		back_inserter(mystack1));
  
  for(int i = 0; i < mystack1.size(); ++i){
		mystack.push_back(mystack1[mystack1.size()-i-1]);
	}



	vector<int> cal_stack;
//	for(index = 0; index != mystack.size(); ++index)
//		cout << mystack[index] << endl;
	while(!mystack.empty()){
	
		if(mystack.back() == "+"){
			int first = cal_stack.back(); 
			cal_stack.pop_back();
			int second = cal_stack.back();
			cal_stack.pop_back();
			cal_stack.push_back(first+second);
			mystack.pop_back();
		}
    else if(mystack.back() == "*"){
			int first = cal_stack.back(); 
			cal_stack.pop_back();
			int second = cal_stack.back();
			cal_stack.pop_back();
			cal_stack.push_back(first*second);
			mystack.pop_back();
	  }
    else if(mystack.back() == "-"){
			int first = cal_stack.back(); 
			cal_stack.pop_back();
			int second = cal_stack.back();
			cal_stack.pop_back();
			cal_stack.push_back(second-first);
			mystack.pop_back();
		}
    else if(mystack.back() == "/"){
			int first = cal_stack.back(); 
			cal_stack.pop_back();
			int second = cal_stack.back();
			cal_stack.pop_back();
			cal_stack.push_back(second/first);
			mystack.pop_back();
		}

	  else{	
			int num;
			istringstream(mystack.back()) >> num;
			cal_stack.push_back(num);
			mystack.pop_back();
			
		}
	}

  for(int a=0; a < cal_stack.size(); ++a)
		cout << cal_stack[a] << endl;

	return 0;
}
