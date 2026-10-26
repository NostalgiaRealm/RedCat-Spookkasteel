/*
 * __callnewh at 10009370
 * int __cdecl __callnewh(size_t _Size)
 * Address ranges: 10009370-1000939c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __callnewh  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_10031620 != (code *)0x0) && (iVar1 = (*DAT_10031620)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

