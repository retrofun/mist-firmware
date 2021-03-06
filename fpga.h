#ifndef FPGA_H
#define FPGA_H

#include "rafile.h"

void fpga_init(char *name);
unsigned char ConfigureFpga(char *) RAMFUNC;
void SendFile(RAFile *file);
void SendFileEncrypted(RAFile *file,unsigned char *key,int keysize);
void SendFileV2(RAFile* file, unsigned char* key, int keysize, int address, int size);
char BootDraw(char *data, unsigned short len, unsigned short offset);
char BootPrint(const char *text);
char PrepareBootUpload(unsigned char base, unsigned char size);
void BootExit(void);
void ClearMemory(unsigned long base, unsigned long size);
unsigned char GetFPGAStatus(void);

#endif

