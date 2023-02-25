#include <libopencm3/rp2040/gpio.h>
#include <libopencm3/rp2040/uart.h>
#include <libopencm3/rp2040/runtime.h>

#define PIN_UART_TX GPIO0
#define PIN_UART_RX GPIO1

int main(void)
{
	runtime_init();

	gpio_set_func(PIN_UART_TX, GPIO_FUNC_UART);
	gpio_set_func(PIN_UART_RX, GPIO_FUNC_UART);

	uart_set_baudrate(UART0, 115200);
	uart_set_databits(UART0, 8);
	uart_set_parity(UART0, UART_PARITY_NONE);
	uart_set_stopbits(UART0, 1);
	uart_set_flow_control(UART0, UART_FLOWCTL_NONE);
	uart_enable(UART0);

	uint8_t rx;

	while (1)
	{
		rx = uart_recv_blocking(UART0);
		uart_send_blocking(UART0, rx);
	}

	return 0;
}