#include<stdio.h> 
#include<conio.h> 
#include<locale.h>  
#include<stdlib.h>
#include<math.h>
int main() 
{
    int x , y, rastoyanie;    
    setlocale(LC_ALL,"Russian");
    printf ("Введите значення x: ");
    scanf ("%d", &x);
    
    printf ("Введите значення y: ");
    scanf ("%d", &y);
  
   rastoyanie = sqrt(pow((35 + x), 2) + pow((40 - y), 2));
  
  printf("Расстояние равно %d", rastoyanie);
  
  system("pause");  
 return 0;
}
