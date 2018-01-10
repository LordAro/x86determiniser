
#include "common.h"

const char * X86Error(int code)
{
   switch (code)
   {
      case FAILED_LOADLIBRARY: // 0x001
         return "LoadLibrary call failed when attempting to load x86determiniser DLL";
      case FAILED_GETPROCADDRESS: // 0x002
         return "GetProcAddress call failed when attempting to find the "
            "startup procedure in x86determiniser DLL";
      case FAILED_MEMORY_PERMISSIONS: // 0x103
         return "Failed to set .text writable (needed for basic block rewriting)";
      case FAILED_MEMORY_BOUND_DISCOVERY: // 0x104
         return "Failed to discover page boundaries of .text segment";
      case FAILED_VERSION_CHECK: // 0x105
         return "Version mismatch between x86determiniser executable and DLL";
      case FAILED_DOUBLE_LOAD: // 0x301
         return "Startup error: loaded twice?";
      case FAILED_MALLOC: // 0x302
         return "malloc failed during startup";
      case FAILED_OPEN_BRANCH_TRACE: // 0x303
         return "Failed to open the --branch-trace file";
      case FAILED_DISASSEMBLE_ERROR: // 0x401
         return "Error when disassembling code";
      case FAILED_UNKNOWN: // 0x003
      default:
         return "Unknown error";
   }
}
