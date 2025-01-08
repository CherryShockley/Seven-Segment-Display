#include <avr/io.h>
#include <util/delay.h>

/*
    A = D2
    B = D3
    C = D4
    D = D5
    E = D6
    F = D7
    G = B0
*/

void setZero()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (1 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (0 << PORTB0);
}

void setOne()
{
    PORTD = PORTD | (0 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (0 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (0 << PORTD7);
    PORTB = PORTB | (0 << PORTB0);
}

void setTwo()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (0 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (1 << PORTD6);
    PORTD = PORTD | (0 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setThree()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (0 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setFour()
{
    PORTD = PORTD | (0 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (0 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setFive()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (0 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setSix()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (0 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (1 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setSeven()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (0 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (0 << PORTD7);
    PORTB = PORTB | (0 << PORTB0);
}

void setEight()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (1 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setNine()
{
    PORTD = PORTD | (1 << PORTD2);
    PORTD = PORTD | (1 << PORTD3);
    PORTD = PORTD | (1 << PORTD4);
    PORTD = PORTD | (1 << PORTD5);
    PORTD = PORTD | (0 << PORTD6);
    PORTD = PORTD | (1 << PORTD7);
    PORTB = PORTB | (1 << PORTB0);
}

void setClear()
{
    PORTB = 0x00;
    PORTD = 0x00;
}