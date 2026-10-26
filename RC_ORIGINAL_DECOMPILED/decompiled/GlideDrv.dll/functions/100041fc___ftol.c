/*
 * __ftol at 100041fc
 * longlong __stdcall __ftol(void)
 * Address ranges: 100041fc-10004222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ftol  Library: Visual Studio
 */

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}

