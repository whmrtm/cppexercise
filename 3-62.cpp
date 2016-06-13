
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	string test("This is a test, with a     space  ");
	int  count, old;
	string::size_type i, j;
	count = 0;

	// find the first space
	for(i = 0; i < test.size(); i++){
		if(isspace(test[i])){
			for(j = 0; test[i+j] != 0; j++){
				if(isspace(test[i+j]))
					count += 1;
				else
					break;
			}
			i += j;
			break;
		}		
		
	}
	for(; test[i] != 0; i++){
		if(isspace(test[i])){
			if(i+count < test.size()){
				i += count;
				if(isspace(test[i]))
				{
					for(j = 0; i+j < test.size(); j++){
						if(isspace(test[i+j]))
							count+=1;
						else
							break;
					}
					i += j;
				}			
				
			}
			else
				break;
			}	
		
	}
	

	cout << count << endl;

	return 0;
}
