//add-nbo
#include<stdio.h>
#include<stdint.h>
#include <netinet/in.h>
#include<stdlib.h>

uint32_t read_file(const char* filepath){
	FILE* fp = fopen(filepath, "rb");
    if(fp == NULL){
        printf("There is no file.");
        exit(1);
    }
    uint32_t result;
    fread(&result, 1, 4, fp);
    fclose(fp);
    return ntohl(result);
}
