#include <libopencm3/rp2040/gpio.h>
#include <libopencm3/rp2040/runtime.h>

#define PIN_LED GPIO13

int main(void)
{
	runtime_init();

	int i, j;
	i = j = 0;

    gpio_init(PIN_LED);
    gpio_set_dir(PIN_LED, GPIO_DIR_OUT);

	while (1)
	{
		gpio_toggle(PIN_LED);	// LED on/off
		j++;

		for (i = 0; i < (j % 64) * 16000; i++)
		// for (i = 0; i < 100000; i++)
		{
			// Wait a bit.
			__asm__("nop");
		}
	}

	return 0;
}