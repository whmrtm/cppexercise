
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
//编写一个算法，能否由一个序列pop出另一个序列 
using namespace std;


bool can_pop(string a, string b){
	vector<char> mys;
	int i, j;
	for(j = 0; j < a.size(); j++){
		if(a[j] == b[0]){
			j++;
			break;
		}
		mys.push_back(a[j]);
	}
   
	i = 0;
	i++;

	while(j < a.size()){
		if(mys.empty()){	
			for(; j < a.size(); j++){
				if(a[j] == b[i]){
					j++;
					break;
				}

				mys.push_back(a[j]);
				
			cout << "here is fine 2" << endl;
			}
		}

		else if(mys.back() == b[i]){
			mys.pop_back();
			cout << "here is fine 1" << endl;
		}

		else{
			
			for(; j < a.size(); j++){
				if(a[j] == b[i]){
					j++;
					break;
				}

				mys.push_back(a[j]);
				
			cout << "here is fine 2" << endl;
			}
		}
		
		i++;
	}

	

	while(i < a.size()){
		if(mys.empty())
			return false;
		else if(mys.back() == b[i]){
				i++;
				mys.pop_back();
		}
		else
			return false;
	}


	return true;

}

int main(){
	string a("str");

	string b("str");
	string c("srt");
	string d("tsr");
	string e("trs");
	string f("rst");
	string g("rts");


	cout << can_pop(a,f) << endl;
	return 0;
}
