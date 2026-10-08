#include <stdio.h>

int main()
{
	double v = 7.78;
	double g = 0.01; 
	double R = 6400.0;
	double h;
	
	double numerator = g * R * R;
	double denominator = v*v;
	
	h = (numerator/denominator) - R;
	
	printf("%.2f",h);
	 
	return 0;
}

