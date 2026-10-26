/*
 * _malloc at 0060d1cc
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 0060d1cc-0060d1dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_007101cc);
  return pvVar1;
}

