#include <iostream>
#include <cmath>
using namespace std;

class PointOnThePlane {
private:
	int x;
	int y;

public:
	int forCompare(int a, int b) {
		if (a > b) {
			return 1;
		}
		else if (a < b) {
			return -1;
		}
		else if (a == b) {
			return 0;
		}
	}
	PointOnThePlane() {
		int x = 0, y = 0;
	}


	PointOnThePlane(int X, int Y) {
		x = X;
		y = Y;
	}





	void ToConsole() {
		cout << "Points with coordinates:";
		cout << "\nX = " << x << "\nY = " << y << endl;
	}
	bool Ecuals(PointOnThePlane point) {
		return this->x == point.x && this->y == point.y;
	}
	int CompareToX(PointOnThePlane point) {
		int pointThis = this->x;
		int pointOther = point.x;
		return forCompare(pointThis, pointOther);
	}
	int CompareToY(PointOnThePlane point) {
		int pointThis = this->y;
		int pointOther = point.y;
		return forCompare(pointThis, pointOther);
	}
	double Distance(PointOnThePlane point) {
		int d = 2;
		int forX = pow((point.x - this->x), d);
		int forY = pow((point.y - this->y), d);
		return sqrt(forX + forY);
	}
	// 2 лаба
	bool operator == (const PointOnThePlane &point) {
		return point.x == this->x && point.y == this->y;
	}
	bool operator != (const PointOnThePlane &point) {
		return !(point.x == this->x && point.y == this->y);
	}
	bool operator < (const PointOnThePlane &point) {
		return point.x + point.y > this->x + this->y;
	}
	bool operator > (const PointOnThePlane &point) {
		return point.x + point.y < this->x + this->y;
	}
	bool operator <= (const PointOnThePlane &point) {
		return point.x + point.y >= this->x + this->y;
	}
	bool operator >= (const PointOnThePlane &point) {
		return point.x + point.y <= this->x + this->y;
	}
	// Доп операторы
	PointOnThePlane operator + (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = point.x + this->x;
		temp.y = point.y + this->y;
		return temp;
	}

	PointOnThePlane operator - (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x - point.x;
		temp.y = this->y - point.y;
		return temp;
	}
	PointOnThePlane operator * (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = point.x * this->x;
		temp.y = point.y * this->y;
		return temp;
	}
	PointOnThePlane operator / (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x / point.x;
		temp.y = this->y / point.y;
		return temp;
	}
	PointOnThePlane operator % (const PointOnThePlane &point) {
		PointOnThePlane temp;
		temp.x = this->x % point.x;
		temp.y = this->y % point.y;
		return temp;
	}
	PointOnThePlane & operator ++() {
		this->x++;
		this->y++;
		return *this;
	}
	PointOnThePlane & operator --() {
		this->x--;
		this->y--;
		return *this;
	}
};
// 3 Лаба
class PointInSpace : public PointOnThePlane {
private:
	int z;
public:
	PointInSpace() : PointOnThePlane() {
		z = 0;
	}
	PointInSpace(int X, int Y, int Z) : PointOnThePlane(X, Y) {
		z = Z;

	}

	void ToConsoleSp() {
		ToConsole();
		cout << "Z = " << z << endl;
	}
	bool EcualsSp(PointInSpace point) {
		return Ecuals(point) && this->z == point.z;
	}
	int CompareToXsp(PointInSpace point) {

		return CompareToX(point);
	}
	int CompareToZsp(PointInSpace point) {
		int pointThis = this->z;
		int pointOther = point.z;
		return forCompare(pointThis, pointOther);
	}
};
class Circle {
private:
	int x, y, r;
public:
	Circle(int X, int Y, int R) {
		X = x;
		Y = y;
		R = r;
	}
	void ToConsole() {
		cout << "Circle on the plane with data:";
		cout << "\nX = " << x << "\nY = " << y << "\nRadius = " << r << endl;
	}
	bool Ecuals(Circle circle) {
		return this->x == circle.x && this->y == circle.y && this->r == circle.r;
	}
	int CompareTo(Circle circle) {
		if (this->r > circle.r) {
			return 1;
		}
		else if (this->r < circle.r) {
			return -1;
		}
		else if (this->r == circle.r) {
			return 0;
		}
	}
	double Distance(Circle circle) {
		int d = 2;
		int forX = pow((circle.x - this->x), d);
		int forY = pow((circle.y - this->y), d);
		return sqrt(forX + forY);
	}
};


class Segment {
private:
	int x, y, x2, y2;
public:
	Segment(int X, int Y, int X2, int Y2) {
		X = x;
		Y = y;
		X2 = x2;
		Y2 = y2;
	}
	void ToConsole() {
		cout << "Segment on the plane with data:";
		cout << "\nX1 = " << x << "\nY1 = " << y << "\nX2 = " << x2 << "\nY2 = " << y2 << endl;
	}
	bool Ecuals(Segment segment) {
		return this->x == segment.x && this->y == segment.y && this->x2 == segment.x2 && this->y2 == segment.y2;
	}
};
