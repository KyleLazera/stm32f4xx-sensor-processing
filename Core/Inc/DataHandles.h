#ifndef INC_DATAHANDLES_H_
#define INC_DATAHANDLES_H_

#include "cmsis_os.h"
#include "stm32f401_spi.h"

#define FIFO_SIZE		200

extern SPI_Handle_t SPI1_Example;
extern GPIO_Config_t ADXL;
extern UART_Config_t UART2;

extern QueueHandle_t adxl_data_queue, filtered_data_queue;

extern SemaphoreHandle_t xCountingSemaphore;

extern int readingTask, filterTask, gatekeeper;

int __io_putchar(int ch);

typedef enum
{
	x_axis,
	y_axis,
	z_axis,
}AxisOfRotation;

typedef struct
{
	AxisOfRotation axis;
	float value;
}AccelerometerData;



#endif /* INC_DATAHANDLES_H_ */
