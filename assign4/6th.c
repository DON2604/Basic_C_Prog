#include <stdio.h>

int main(){
  int x, y;
  print("Enter an integer x: ");
  scanf("%d", &x);
  if(x > 10 && x < 30){
    y = x + 10;
  }else if(x > 50 && x < 70){
    y = 3 * x;
  }else{
    y = x - 2;
  }
  printf("y = %d\n", y);
  return 0;
}