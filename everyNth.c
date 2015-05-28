#include "everyNth.h"


uint64_t pwr(int, int);

uint64_t everyNth(uint64_t Value, uint8_t N) {

  uint64_t y = Value;   
  uint64_t numDig = 0;
  while (y != 0) {
    y = y/10;    // divides number of Value until y=0 meaning no more numbers
    numDig++;    // counts the number of digits in Value
  }

  uint64_t i = 0;
  uint64_t sum = 0;
  uint64_t digit = 0;
  for ( int j = 1; j <= numDig; j+=N ) {  // number of times to get number in Value
    digit = Value % 10;   // gets the first number in Value
    Value /= pwr(10, N);   // gets each Nth digit number
    sum += digit * pwr(10, 0+i);   // concatenate the numbers got from the Value
    i++;
  }

  return sum;
} 


uint64_t pwr (int base, int N) {  // the power function; I got this source from Stackoverflow (http://stackoverflow.com/questions/15265230/c-writing-a-function-for-an-exponent-without-using-pow).
  int i;
  uint64_t mult = 1;
  for (i = 0; i < N; ++i ) {
    mult *= base;
  }
  return (mult);
}


// On my honor: 
// 
// - I have not discussed the C language code in my program with 
// anyone other than my instructor or the teaching assistants 
// assigned to this course. 
// 
// - I have not used C language code obtained from another student, 
// or any other unauthorized source, either modified or unmodified. 
// 
// - If any C language code or documentation used in my program 
// was obtained from an allowed source, such as a text book or course 
// notes, that has been clearly noted with a proper citation in 
// the comments of my program. 
// 
// Christopher Aska Toda 
