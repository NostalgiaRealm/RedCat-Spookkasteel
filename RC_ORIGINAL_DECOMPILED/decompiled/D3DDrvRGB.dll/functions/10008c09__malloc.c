/*
 * _malloc at 10008c09
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 10008c09-10008c1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100ec15c);
  return pvVar1;
}

