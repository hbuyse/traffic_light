#include <wiringPi.h>
int main (void)
{
  wiringPiSetup () ;

  pinMode (0, OUTPUT) ;
  pinMode (1, OUTPUT) ;
  pinMode (2, OUTPUT) ;

  for (;;)
  {
    digitalWrite (0, HIGH) ; delay (700) ;
    digitalWrite (0,  LOW) ;
    digitalWrite (1, HIGH) ; delay (100) ;
    digitalWrite (1,  LOW) ;
    digitalWrite (2, HIGH) ; delay (500) ;
    digitalWrite (2,  LOW) ;
  }
  return 0 ;
}
