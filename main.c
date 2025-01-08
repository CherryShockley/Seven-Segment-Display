// Chip: Atmega328P

#include <avr/io.h>
#include <util/delay.h>
#include "sevenSegmentDisplay.h"


/*
  These pins are hard coded
    A = D2 
    B = D3
    C = D4
    D = D5
    E = D6
    F = D7
    G = B0 (D8 on Arduino)
*/
int main(void)
{

  DDRD = DDRD | (1 << DDD2);
  DDRD = DDRD | (1 << DDD3);
  DDRD = DDRD | (1 << DDD4);
  DDRD = DDRD | (1 << DDD5);
  DDRD = DDRD | (1 << DDD6);
  DDRD = DDRD | (1 << DDD7);
  DDRB = DDRB | (1 << DDB0);


  while(1)
  {
    setZero();
    _delay_ms(1000);
    setClear();
        
    setOne();
    _delay_ms(1000);
    setClear();

    setTwo();
    _delay_ms(1000);
    setClear();

    setThree();
    _delay_ms(1000);
    setClear();

   setFour();
    _delay_ms(1000);
    setClear();

   setFive();
  _delay_ms(1000);
  setClear();

  setSix();
  _delay_ms(1000);
  setClear();

  setSeven();
  _delay_ms(1000);
  setClear();
    
  setEight();
  _delay_ms(1000);
  setClear();

  setNine();
  _delay_ms(1000);
  setClear();
    

  }



}