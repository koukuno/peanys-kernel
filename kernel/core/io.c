#include "io.h"

void kputs(const char *s) {
	kprintf("%s\n", s);
}

void panic(const char *s) {
	kprintf("\nKernel Panic - %s", s);
	reboot();
}
