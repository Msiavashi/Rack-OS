#include "startmain.h"
#include "monitor.h"
#include "./rlibc/stdio.h"
#include "debug.h"

#define EXIT_SUCCESS 0
#define TRUE 1

int start_main()
{
	/* Testing system file. */
	// You don't have to know what is the declaration below, memorize it till you learn the concept of 'pointers'.
	FILE * file;
	char c;
	// You are not allowed to use monitor_write function, you have to implement your own.
	monitor_write("[-] Dump: File System Contents\n");
	// This function has been used to dump the file system,  and is available in the debug library.
	fs_dump(TRUE);
	// You are not allowed to use monitor_write function, you have to implement your own.
	monitor_write("[-] Test: fopen function\n");
	// If you have included your own file(s), change the file name below.
	file = fopen("fs_test.txt", "r");
	while((c=fgetc(file)) != EOF)
	{
		putch(c);
	}
	// You are not allowed to use monitor_write function, you have to implement your own.
	monitor_write("[-] If you see any text, then the test has been sucessful.\n");
	while(TRUE);
	return EXIT_SUCCESS;
}

