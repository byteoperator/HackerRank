#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b) {
  return a+b;
}
int main() {
  int num1, num2;
  int sum;
  scanf("%d", &num1);
  scanf("%d", &num2);
  sum = solveMeFirst(num1,num2);
  printf("%d", sum);;
  return 0;
}
