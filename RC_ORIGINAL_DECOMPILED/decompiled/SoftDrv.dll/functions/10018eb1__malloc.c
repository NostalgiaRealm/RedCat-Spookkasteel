/*
 * _malloc at 10018eb1
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 10018eb1-10018ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10025d10);
  return pvVar1;
}

