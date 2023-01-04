#include<stdio.h>
int main(){
   float vol;
   int rad;
   rad=20;
   vol=((4.0f/3.0f) * (3.1415) * rad * rad * rad);
   printf("the volume of a sphere is %f",vol);
   return 0;
}