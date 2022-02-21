#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void feelingVuln(char* input) {
	char buffer[80];
	strcpy(buffer, input);
}

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("Error: Enter a Valid License Key.\nProperty of Industrial Business Systems.\nAll Rights Reserved.\n");
		exit(1);
	}

	if(!strcmp(argv[1], "--help")) {
		printf("To access documentation and enterprise support, please enter a valid License Key.\n");
	}

	if(!strcmp(argv[1], "XF957GHSDH9")) {
		printf("Warning! Only Certified Industrial Business Systems Engineers may use the IBS Mainframe Administrator HybridCloudShell(TM).\n"
		       "Misuse of the HybridCloudShell(TM) MAY RESULT IN DATA LOSS OR LICENSE REVOCATION.\n"
		       "Please Enter Your Certified IBS Engineer Identification Number to Continue.\n\n"
		       "Property of Industrial Business Systems.\n"
		       "All Rights Reserved.\n");
	}

	if ((strcmp(argv[1], "XF957GHSDH9") != 0) && (strcmp(argv[1], "--help") !=0)) {
		printf("Invalid Key.\nProperty of Industiral Business Systems.\nAll Rights Reserved.\n");
	}

	feelingVuln(argv[1]);

	exit(0);
}
