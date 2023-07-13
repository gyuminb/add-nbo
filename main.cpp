//main.cpp
#include<stdio.h>
#include<stdint.h>
#include "add-nbo.h"


int main(int argc, char** argv){
	if(argc != 3){
		printf("usage: %s <file1> <file2>\n", argv[0]);
		printf("sample : add-nbo a.bin b.bin\n");
		return 0;
	}
	uint32_t num1 = read_file(argv[1]);
	uint32_t num2 = read_file(argv[2]);
	uint32_t result = num1 + num2;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", num1, num1, num2, num2, result, result);
	return 0;
}
