#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

int main() {

	Circle c(10, 20, 50);
	Circle c1(c);
	cout << c << endl;
	c.move(5, 5);
	cout << c << endl;
	cout << (c == c1) << endl;
	

	Rectangle r(10, 10, 4, 8);
	Rectangle r1(r);
	cout << r << endl;
	r.move(20, 50);
	r.turn_90();
	cout << r << endl;
	cout << (r == r1) << endl;

	Triangle t(0, 0, 3, 4, 5);
	Triangle t1(t);
	cout << t << endl;
	t.move(10, 7);
	cout << t << endl;

	cout << "turn 90 to the right" << endl;
	t.turn_90();
	cout << t << endl;
	cout << "again turn 90 to the right" << endl;
	t.turn_90();
	cout << t << endl;

	cout << "area: " << t.area() << endl;
	cout << (t == t1) << endl;

	system("pause");
	return 0;
}
