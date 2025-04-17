#include<stdio.h>

void two_podoubles(double a,double b,double c, double d);
void podouble_slope(double x, double y, double m);

double main() {

	double a;
	double k,l,m,n;

	printf("This program finds the equation of your line in 2D\n");
	printf("1)  2 points\n");
	printf("2)  1 points and the slope\n");
	printf("What is known about the line?\n =>");
	scanf("%lf", &a);

	if(a == 1) {

		printf("Enter your first podouble (x,y) by using a space between them:");
		scanf("%lf %lf", &k,&l);

		printf("Enter your second podouble (x,y) by using a space between them:");
		scanf("%lf %lf", &m,&n);

		two_podoubles(k,l,m,n);

	}

	else if(a == 2) {

		printf("Enter your points (x,y) by using a space between them:");
		scanf("%lf %lf", &k,&l);

		printf("Enter your slope:");
		scanf("%lf", &m);

		podouble_slope(k,l,m);

	}
	else {
		printf("Invalid argument!");
	}

	return(0);
}


void two_podoubles(double a,double b,double c, double d) {

	double slope,heh;

	slope = (a+b)/(c+d);

	heh = a - slope*b;

	printf("Point-Slope form     :    y-%g = %g(x-%g)\n",a,slope,b);
	printf("Slope-intercept form :    y = %gx + %g",slope,heh);

}


void podouble_slope(double x, double y, double m) {

	double heh;
	heh = y - x*m;
	
	printf("Point-Slope form     :    y-%g = %g(x-%g)\n",y,m,x);
	printf("Slope-intercept form :    y = %gx + %g",m,heh);




}
