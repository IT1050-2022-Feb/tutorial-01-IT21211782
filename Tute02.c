/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance,total,total1,total2;
  printf("enter the distance :");
  scanf("%d", &distance);
  
  if(distance <= 30)
  {total = distance * 50;
   printf("%d\n",total);}
  
  else 
    if(distance > 30 )
    { total1 = 30 * 50;

      total2 = (distance -30 ) * 40;
      total = total1 +total2;
     printf("%d",total);} 
      
    
  return 0;
}
