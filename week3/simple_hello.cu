#include <stdio.h>
#include <stdlib.h>
int main( void )
{
	int deviceCount;
	cudaGetDeviceCount( &deviceCount );
	printf("Hello, Physics 244 Class! You have %d devices\n", deviceCount );
	return 0;
}
