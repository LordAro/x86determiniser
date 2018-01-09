#ifndef X86_COMMON_H
#define X86_COMMON_H

#include "remote_loader.h"
#include <stdint.h>

void x86_trap_handler (uint32_t * gregs, uint32_t trapno);
int x86_startup (size_t minPage, size_t maxPage, CommStruct * pcs);
void x86_check_version (CommStruct * pcs);
void x86_bp_trap (int code, void * arg);


#endif
