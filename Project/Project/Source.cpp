#include <iostream>
#include "ClassGeometry.h"

using namespace std;


int main() {
	PointOnThePlane pointb = PointOnThePlane(2, 2);
	PointOnThePlane pointP = PointOnThePlane(2, 2);
	if (pointP == pointb)
		cout << "True" << endl;
	else
	{
		cout << "false" << endl;
	}
	/*
	PointOnThePlane result = pointb + pointP;
	result.ToConsole();

	*/
	PointInSpace lol = PointInSpace(2, 2, 3);
	PointInSpace kek = PointInSpace(1, 2, 7);
	boolalpha;
	lol.ToConsoleSp();

	system("pause");
	return 0;
}