#include <iostream>
#include <conio.h>

using namespace std;


int GetLengthFromUser()
{
	cout << "Enter the length of the rectangle.";
	
	int length = 0;
	cin >> length;

	return length;
}

int GetWidthFromUser()
{
	cout << "Enter the width of the rectangle.";

	int width = 0;
	cin >> width;

	return width;
}

int CalculateArea(int length, int width)
{
	int area =  length * width;
	return area;
}

void DisplayArea(int area)
{
	
	// = CalculateArea(GetLengthFromUser(), GetWidthFromUser());
	
	cout << "The area of the rectangle is " << area << ".";

}

int main()
{
	int length = GetLengthFromUser();
	int width = GetWidthFromUser();
	int area = CalculateArea(length, width);
	DisplayArea(area);

	(void)_getch();
	return 0;
}