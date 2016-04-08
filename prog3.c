#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
#include<conio.h> 
#include<locale.h> 
 
 
 int main()
 {
 double a, x, zn; 
  int rik = 0;
	setlocale(LC_ALL,"Russian");
  printf("\nÂâåäèòå ñóììó âêëàäó: ");
 scanf("%lf", &x);
  printf("\nÂâåäèòå %%: ");
  scanf("%lf", &a);
 	
  zn = x * 2;
 	
  while(x < zn) {
  rik++;
  x = x + ((x / 100) * a);
 	}
 	
 printf("\nÊîëè÷åñòâî ëåò: %d", rik);
  printf("\nÂàø âêëàä áóäåò = %lf", x);
 	system("pause");
  return 0;
}
