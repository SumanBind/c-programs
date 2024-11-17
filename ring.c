#include<stdio.h>
void main()
{
     char ring;
     int unit;
     float cost=0;
     printf("enter type of rings(gold=g,silver=s and solid gold=d)");
     scanf("%c",&ring);
     printf("enter engraving unit");
     scanf("%d",&unit);
     if(ring=='g')
     {
        cost=500+unit*70.30;
     }
     else if(ring=='d')
     {
        cost=1000+unit*10.40;
     }
     else if (ring=='s')
     {
         cost=300+unit*5.10;
     }
     printf("total cost =%f",cost);
}