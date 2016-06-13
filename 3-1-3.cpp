#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

double  cal_aver(vector<double> arr){
	int i;
	double sum = 0;

	for(i = 0; i < arr.size(); i++){
		sum += arr[i];
	}
	return sum/arr.size();	
}

double std_deri(vector<double> arr){
	double aver = cal_aver(arr);
	double deri = 0;
	int i;
	for(i = 0; i < arr.size(); i++){
		deri += pow(arr[i] - aver,2);	
	}
	return sqrt(deri);
}

int main(){
	int N = 10;
	int r = 2;
	int i;
	double r_num;
	vector<double> myarr;
	for(i = 0; i < N; i++){
		r_num = rand() % r;
		myarr.push_back(r_num);
	}

	cout << cal_aver(myarr) << endl;
	cout << std_deri(myarr) << endl;	
	return 0;
}
