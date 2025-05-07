#include <stdio.h>
#include <math.h>

void sphere (double radius,double *diameter,double *surface,double *volume);

#define pi 3.141592

int main(){
    
    double radius, diameter, surface, volume;
    
    printf("Enter radius:");
    scanf("%lf", &radius);
    
    sphere(radius, &diameter, &surface, &volume);
    
    printf("Diameter      : %g \n",diameter);
    printf("Surface area  : %g \n" ,surface);
    printf("Volume        : %g", volume);
    
    
    
}
    void sphere (double radius,double *diameter,double *surface,double *volume)
{
    
    *diameter = radius * 2;
    *surface = 4 * pi * pow(radius,2);
    *volume = 4 * pi * pow(radius,3) / 3 ;
}