#include <stdio.h>
#include <math.h>

int main()
{
   
    float x1 = 2, y1 = 2;
    float x2 = 8, y2 = 3;
    float x3 = 4, y3 = 6;
    
   

    float area = ((float)1 / 2) * abs((int) (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    printf("Area of the given Triangle is : %f", area);

    return 0;
}