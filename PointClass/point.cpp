#include <iostream>
#include <stdlib.h>
#include "point.h"
using namespace std;
int main ()
{

	point p1, p2;


	p1.setPoint(15, 100);
	p2.setPoint(20,100);


	cout<<"p1: "<<p1.getX () <<" , "<<p1.getY () <<endl;
	cout<<"p2: "<<p2.getX () <<" , "<<p2.getY () <<endl;

	return 0;
}
