#include<bits/stdc++.h>
class Rectangle
{
	private:
		float length;
		float width;
	public:
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
		int sameArea(Rectangle);
};
void Rectangle::setlength(float len)
{
	length = len;
}
void Rectangle::setwidth(float wid)
{
	width = wid;
}
float Rectangle::perimeter()
{
	return (2 * length + 2 * width);
}
float Rectangle::area()
{
	return length * width;
}
void Rectangle::show()
{
	cout << "Length: " << length << " Width: " << width;
}
int Rectangle::sameArea(Rectangle other)
{
	float areaf = length * width;
	float areas = other.length * other.width;
	if (areaf == areas)
		return 1;
	return 0;
}
int main()
{
	Rectangle first;
	Rectangle second;
	first.setlength(5);
	first.setwidth(2.5);
	second.setlength(5);
	second.setwidth(18.9);
	cout << "First rectangle: ";
	first.show();
	cout << endl << "Area: " << first.area() << "Perimeter: " << first.perimeter() << endl << endl;
	cout << "Second rectangle: ";
	second.show();
	cout << endl << "Area: " << second.area() << "Perimeter: " << second.perimeter() << endl << endl;
	if (first.sameArea(second))
		cout << "Rectangles have the same area\n";
	else
		cout << "Rectangles do not have the same area\n";
	first.setlength(15);
	first.setwidth(6.3);
	cout << "First rectangle: ";
	first.show();
	cout << endl << "Area: " << first.area() << "Perimeter: "<< first.perimeter() << endl << endl;
	cout << "Second rectangle: ";
	second.show();
	cout << endl << "Area: " << second.area() << "Perimeter: "<< second.perimeter() << endl << endl;
	if (first.sameArea(second))
		cout << "Rectangles have the same area\n";
	else
		cout << "Rectangles do not have the same area\n";
	getch();
	return 0;

}




