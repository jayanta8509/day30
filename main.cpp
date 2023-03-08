// Write a Program to print Length of the string without using strlen() function
#include <iostream>
using namespace std;
void len(string a) {
  int k = 0;
  while (a[k] != 0) {
    k++;
  }
  cout << k;
}

int main() {
  string a = "Hello";
  len(a);
}