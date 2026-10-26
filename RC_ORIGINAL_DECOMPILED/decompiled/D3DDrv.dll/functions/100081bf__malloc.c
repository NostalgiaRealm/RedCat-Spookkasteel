/*
 * _malloc at 100081bf
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 100081bf-100081d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_101c3720);
  return pvVar1;
}

