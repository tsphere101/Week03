#include <stdio.h>
#include <math.h>
#define PI 3.142857
int main()
{
	double initVelo, angle, time, height, tpd, xDis;
	double const g = 9.807;
	printf("Enter the value\n(if unknown enter - 1)");
	printf("Initial Speed : ");
	scanf(" % lf ", &initVelo);
	printf("Angle : ");
	scanf(" % lf ", &angle);
	printf("Time Traveled : ");
	scanf(" % lf ", &time);
	printf("Total Distance Traveled : ");
	scanf("% lf", &tpd);
	printf("Horizontal Distance : ");
	scanf("% lf", &xDis);

}

double Vx(double v, double angle)
{
	return v * cos(DegToRad(angle));
}

double Vy(double v, double angle)
{
	return v * sin(DegToRad(angle));
}

double DegToRad(double deg)
{
	double result = deg * PI / 180;
	return result;
}

double xDistance(double v, double time, double angle)
{
	double result = v * cos(DegToRad(angle)) * time;
	return result;
}

double angleAndVeloTimeUsed(double v, double angle)
{
	double result = quadraticAns(g / 2, Vy(v, DegToRad(angle)), 0);
	return result;
}

double xDisandVeloTimeUsed(double xDis, double v)
{
	double result = xDis / v;
	return result;
}

double quadraticAns(double a, double b, double c)
{
	if (b * b < 4 * a * c) { return 0; }
	double x1 = (-b + sqrt(b * b - (4 * a * c))) / 2 * a;
	double x2 = (-b - sqrt(b * b - (4 * a * c))) / 2 * a;
	if (x1 > 0) { return x1; }
	else if (x2 > 0) { return x2; }
}
