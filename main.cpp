#include "Student.h"
#include <string>
#include <stdio.h>
#include <iostream>

int main() {
  Student s("Peter", "Cooper", 1859, Major::EE);
  for (float g = 3.5f; g <= 4.0f; g += 0.1f) {
    s.addGrade(g);
  }
  s.printInfo();
  s.addGrade(4.0);
  s.printInfo();
  return 0;
}
