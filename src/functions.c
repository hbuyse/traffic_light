/**
 * @file functions.c
 * @author hbuyse
 * @date 26/12/2015
 */

#include <wiringPi.h>          // digitalWrite, delay


void turn_on_off(int                _pin,
                 unsigned long int  _delay
                 )
{
    digitalWrite(_pin, HIGH);
    delay(_delay);
    digitalWrite(_pin, LOW);
}