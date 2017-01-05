// Included headers: 
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <windows.h>

bool isDirectoryValid (char *dirToCheck);

void delay (long seconds) {
	clock_t time1 = clock();  // Use clock time
   	clock_t time2 = time1 + seconds;
  	while(time1 < time2) {
    	time1 = clock();
	}
  	return;
}
