//
//  main.c
//  ComparingCFObjects
//
//  Created by Panayotis Matsinopoulos on 9/7/21.
//

#include <stdio.h>
#include <CoreFoundation/CoreFoundation.h>

void stringTest(CFStringRef myString) {
  Boolean equal = CFEqual(myString, CFSTR("Kalamazoo"));
  if (equal) {
    printf("Strings are equal\n");
  }
  else {
    printf("Strings are not equal\n");
  }
}

int main(int argc, const char * argv[]) {

  stringTest(CFSTR("Kalamazoo"));
  
  return 0;
}
