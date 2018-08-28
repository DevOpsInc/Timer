#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>

#include <time.h>




int main(void)
{
	timer keyTimer(250);        /// create keyTimer with const tick rate of 250 ms

	while (true)
	{
		if (keyTimer)										/// determines if timer has completed
		{
			if (GetAsyncKeyState(VK_F1))
			{
				printf("keyTimer delay test.\n");

				keyTimer.delay();						/// call delay
			}
		}
	}

	return 0;
}
