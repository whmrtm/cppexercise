
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "point.h"
using namespace std;

float my_distance(point a,point b){
	float dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx*dx + dy*dy);
}
int main(){
	int N = 10;
	int i;
	float min_dist, minx, miny; 
	point init, temp, min_point;
	cin >> init.x >> init.y;
//	double r = ((double) rand()/(RAND_MAX)) + 1;	
	cin >> temp.x >> temp.y;
	min_dist = my_distance(init, temp);
	minx = temp.x;
	miny = temp.y;

	for(i = 0; i < N-2; i++){
		cin >> temp.x >> temp.y;
		if(my_distance(temp,init) < min_dist){
			min_dist = my_distance(temp,init);
			minx = temp.x;
			miny = temp.y;
		}	
		cout << min_dist << endl;
		cout << minx << " " << miny << endl;
	}
	return 0;
}
