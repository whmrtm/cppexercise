#include <time.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include "point.h"
using namespace std;
float dist(point a, point b){
	float dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx*dx + dy*dy);
}
int main(){
	point a, b, c;
	srand(time(0));
	a.x = (float) rand() / RAND_MAX;
	a.y = (float) rand() / RAND_MAX;
	b.x = (float) rand() / RAND_MAX;
	b.y = (float) rand() / RAND_MAX;
	c.x = (float) rand() / RAND_MAX;
	c.y = (float) rand() / RAND_MAX;
	
	float A = dist(a,b), B = dist(b,c), C = dist(c,a);

	float S = (A + B + C)/2;
	cout << sqrt(S*(S-A)*(S-B)*(S-C)) << endl;
	
	return 0;
}
