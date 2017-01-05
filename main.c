/*
 * PROGRAM:		bgen v. 0.1.1
 * 
 * DESCRIPTION:	Generates a .bat file to automate conversion of PNG image files
 * 				to WEBP to help reduce the size of Android APK files.
 * 
 */

#include "main.h"

// Definitions:
#define PROG_VERS "0.2.1"
#define S_CRLF "\r\n"
#define ARG_HELP "-help"
#define ARG_DIR "-d"


// Check to see if a directory is valid:
bool isDirectoryValid (char *dirToCheck) {
	return true;
}

// Program entry point/main function:
int main(int argc, char **argv) {
	// Clear the console of all pre-existing content:
	int cls = system("cls");
	
	// Print welcome message:
	printf("%s v.%s%s", "bgen", PROG_VERS, S_CRLF);
	
	// Parse command line arguments:
	if (argc == 1) {
		// No arguments supplied:
		printf("Error: You must specify the project directory as an argument. Type \"bgen -d\" followed by the directory. For more information, type \"bgen -help.\"%s", S_CRLF);
	} else if (argc == 2) {
		// argv[1] should be "-help":
		if (strcmp(argv[1], "-help") == 0) {
			// Print the "help" message:
			// Load the message from help.q:
		} else if (strcmp(argv[1], "-d") == 0) {
			// User entered the "-d" argument but didn't provide a directory:
			printf("Error: No directory was specified. For more information, type \"bgen -help.\"%s", S_CRLF);
		}
	} else if (argc == 3) {
		// argv[1] should be "-d":
		if (strcmp(argv[1], "-d") == 0) {
			// The correct number of arguments was supplied, and argv[1] is the 
			// correct argument. Check to see if argv[2] is a valid directory:
			//char *inputDir = argv[2];
			if (isDirectoryValid(argv[2])) {
				// Specified directory is valid. Proceed:
			} else if (!isDirectoryValid(argv[2])) {
				// The value of argv[2] does not appear to be a directory:
			}
		} else {
			// Incorrect argument supplied for argv[1]:
		}
	}
	
	return 0;
}
