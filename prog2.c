include<stdio.h> 
#include<conio.h> 
#include<locale.h>  
#include<stdlib.h>
#include<math.h> 

int main()
{
    float x, a, b, c, d, f, g, h, y;
    
    setlocale(LC_ALL,"Russian"); 
    printf("Ââåäèòå x= ");
    scanf("%lf", &x);
    
    if (x < 1328) 
    {
          a=0;
          b=1;
          c=1;
          d=2;
          f=-5;
          g=0.005;
          h=0;
          
          y = a + (b / c + d * exp(f + g *(x + h)) );
          printf("y(x)=%lf",y);
          
          }else{
                if ((x=1328) && (x>1328)) {
                             a=0;
                             b=7;
                             c=4;
                             d=1;
                             f=-5;
                             g=0.004;
                             h=1100;
                             y = a+ (b / c + d * exp (f + g *(x + h) ));
                             printf("y(x)=%lf", y);
                             
                             }
                           
                             }
                             
                             
                              return 0;
                             
