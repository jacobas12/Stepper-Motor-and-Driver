#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set up the pins for the stepper motor
    DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB3);
	
    // Configure the motor sequence
    uint8_t motor_seq[] = {0b0001, 0b0010, 0b0100, 0b1000};
    uint8_t seq_idx = 0;

    while (1)
    {
        // Step the motor forward
        PORTB = motor_seq[seq_idx];
		
        seq_idx = (seq_idx + 1) % 4;
        _delay_ms(2);
    }
    return 0;
}
