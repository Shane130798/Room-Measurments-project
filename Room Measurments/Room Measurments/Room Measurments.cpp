// Room Measurments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <array>
#include <conio.h>
#include <iostream>

using namespace std;

class Floor
{
	public:

	private:

	protected:
		double dZaxis = 0;
		double dXaxis = 0;
};

class Wall
{
public:
	void GetWallDetails(double dWidthpass);
	double ShowResults(double dHeightpass, double dWidthpass);
protected:

private:
	double dHeight =10;
	double dWidth =0;
};

void Wall::GetWallDetails(double dWidthpass)
{
	dWidth = dWidthpass;
};



double Wall::ShowResults(double dHeightpass, double dWidthpass)
{
	double  dArea = dHeight * dWidth;
	double dPrice = dArea * 1;
	double dPriceDeluxe = dArea * 12;
	cout << endl << endl << "The Price of Normal Wallpaper for this wall is: " << char(156) << dPrice;
	cout << endl << endl << "The Price of Deluxe Wallpaper for this wall is: " << char(156) << dPriceDeluxe;

	return dPrice;
}

int main()
{
	Wall oWall;
	double dHeight = 0;
	double dWidth = 0;
	cout << "Welcome to the program!" << endl;
	cout << endl << "Please enter the Wall's Width in Meters: ";
	cin >> dWidth;
	cout << endl << "Your Wall's Width is: " << dWidth << " M";

	oWall.GetWallDetails(dWidth);
	oWall.ShowResults(dHeight, dWidth);








	_getch();
    return 0;
}
