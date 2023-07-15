#include <avr/io.h>
#include <util/delay.h>

void blink() {
    PORTB ^= (1 << PB0);
}

int main(void)
{
    /* Sets PORT B.5 as an output */
    DDRB |= (1 << PB0);
    while(1){
        blink();
        _delay_ms(100);
    }
}