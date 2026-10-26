/*
 * _malloc at 0040c8b6
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 0040c8b6-0040c8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_0041355c);
  return pvVar1;
}

