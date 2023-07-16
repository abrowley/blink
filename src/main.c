#include <avr/io.h>
#include <util/delay.h>
#include <blink.h>

int main(void)
{
    DDRB |= (1 << PB0);
    while(1){
        blink();
        _delay_ms(1000);
    }
}