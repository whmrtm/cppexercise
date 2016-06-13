#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
// Check palindrome

using namespace std;

int main(){
	string mys("if I had a ifi");
	string::size_type i;
	for(i = 0; i < mys.size(); i++){
		if(isspace(mys[i]))
			mys.erase(i,1);
		mys[i] = tolower(mys[i]);
	}
	string res = mys;
	reverse(mys.begin(),mys.end());

	if(res == mys){
		cout << "Y" << endl;
	}
	return 0;
}
