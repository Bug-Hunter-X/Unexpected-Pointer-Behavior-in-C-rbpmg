int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Outputs 20 
  *ptr = *ptr * 2; 
  printf("%d", x); // Outputs 40, Correct

  int y = 30;
  ptr = &y; 
  *ptr = 40; 
  printf("%d", y); // Outputs 40, Correct

  int z[5] = {1,2,3,4,5};
  int *arrPtr = z; 
  *arrPtr = 100; 
  printf("%d", *arrPtr); // Outputs 100, Correct

  int a = 10; 
  int *ptr2 = &a; 
  int **ptr3 = &ptr2; 
  **ptr3 = 20; 
  printf("%d", a); // Outputs 20, Correct

  int b = 10;
  int *ptr4 = &b;
  *ptr4 = 20;
  *ptr4 *= 2; //Simplified the expression
  printf("%d", b); // Outputs 40

  b = 10; //Reset b for next example
  ptr4 = &b;
  *ptr4 = 20;
  *ptr4 /= 2; //Simplified expression
  printf("%d", b); // Outputs 10, Correct

  return 0; 
}