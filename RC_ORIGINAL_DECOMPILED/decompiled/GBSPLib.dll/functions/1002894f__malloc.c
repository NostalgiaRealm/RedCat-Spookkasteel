/*
 * _malloc at 1002894f
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 1002894f-10028960
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1052a5b0);
  return pvVar1;
}

