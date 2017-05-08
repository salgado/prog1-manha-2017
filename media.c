#include <stdio.h>

int main()
{
  float av1;
  float av2;
  float media;
  
  printf("\nEntre com a av1:");
  scanf("%f", &av1);
  
  printf("\nEntre com a av2:");
  scanf("%f", &av2);
  
  media = (av1 + av2) / 2 ;
  
  printf("\nMedia = %.2f\n", media);
  
  return 0;
}