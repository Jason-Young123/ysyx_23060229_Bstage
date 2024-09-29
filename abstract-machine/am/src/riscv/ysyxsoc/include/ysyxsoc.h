#define UART_BASE 0x10000000
#define UART_TX 0
#define UART_LCR 3
//Line Control Register
#define UART_DLB1 0
#define UART_DLB2 1
//Divisor Latch Byte 1/2
//假设工作主频为2GHz左右,波特率为115200,则根据计算,Divisor Latch
//的值应该等于2G/115200/16 ~ 1024,即DL内数据应该为:
//0000_0100_0000_0000
//亦即应该向DLB1写入0000_0000,向DLB2写入0000_0100
