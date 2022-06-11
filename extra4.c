#include <stdio.h> 
#include <math.h> 
struct point 
{ 
 float x; 
 float y; 
}; 
float distance (struct point, struct point);   
void  enter_a_point ( struct point * ); 
int main (void)  
{ 
  struct point pt1, pt2; 
  
 enter_a_point(&pt1); //get x & y values for pt1 
 enter_a_point(&pt2); //get x & y values for pt2  
 printf( "Distance between the points = %.2f\n", distance( pt1, pt2)); 
  
 return 0; 
} 
float distance (struct point p1, struct point p2) 
{ 
  
 return sqrt( pow( p2.x-p1.x, 2) + pow( (p2.y-p1.y), 2) ); 
} 
void enter_a_point ( struct point *p ) 
{ 
 printf("\nEnter an X coordinate: "); 
    scanf("%f", &p->x); 
 printf("\nEnter a Y coordinate: "); 
    scanf("%f", &p->y); 
}