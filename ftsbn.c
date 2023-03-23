#include <stdio.h>

int main() {
  int a, b, c, d, e;
  char response;
  // ask for small/big number;
  printf("Do you want smallest/biggest(You must type s/S for smallest or b/B for biggest): ");
  scanf("%c", &response);
  char tolower(response);
  if (response == 's') {
    printf("Enter 5 numbers with space in between: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    //test case for smaller number;
    if ((a < b) && (a < c) && (a < d) && (a < e)) {
      printf("%d is smallest\n", a);
    } else if ((b < a) && (b < c) && (b < d) && (b < e)) {
      printf("%d is smallest\n", b);
    } else if ((c < a) && (c < b) && (c < d) && (c < e)) {
      printf("%d is smallest\n", c);
    } else if ((d < a) && (d < b) && (d < c) && (a < e)) {
      printf("%d is smallest\n", d);
    } else if ((e < a) && (e < b) && (e < c) && (e < d)) {
      printf("%d is smallest\n", e);
    } else {
      printf("Undefined\n");
    } 
  } else if (response == 'b'){
    printf("Enter 5 numbers with space in between: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    //test case for bigger number;
    if ((a > b) && (a > c) && (a > d) && (a > e)) {
      printf("%d is biggest\n", a);
    } else if ((b > a) && (b > c) && (b > d) && (b > e)) {
      printf("%d is biggest\n", b);
    } else if ((c > a) && (c > b) && (c > d) && (c > e)) {
      printf("%d is biggest\n", c);
    } else if ((d > a) && (d > b) && (d > c) && (d > e)) {
      printf("%d is biggest\n", d);
    } else if ((e > a) && (e > b) && (e > c) && (e > d)) {
      printf("%d is biggest\n", e);
    } else {
      printf("Undefined\n");
    }
  }
  
}
