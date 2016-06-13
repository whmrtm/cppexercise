#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;
// 动态规划自底向上的方法
int fbnq_cal(int N){
  if(N <= 2)
		return 1;
	int pre = 1;
	int ppre = 1;
	int curr = 0;
	for(int i = 3; i <= N; i++){
		curr = pre + ppre;
		if(N == i)
			return curr;
		ppre = pre;
		pre = curr;
	}
}
int knownF[100];
int F(int N){
	int t;
	if(knownF[N] != 0) return knownF[N];
	if(N == 0) t = 0;
	if(N == 1) t = 1;
  if(N > 1) t = F(N-1) + F(N-2);
	return knownF[N] = t;
}


int main(){
  cout << F(3) << endl;
  cout << F(4) << endl;
  cout << F(5) << endl;
  cout << F(6) << endl;
  cout << F(70) << endl;
	return 0;
}
