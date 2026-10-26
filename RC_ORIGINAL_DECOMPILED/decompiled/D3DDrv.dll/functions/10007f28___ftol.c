/*
 * __ftol at 10007f28
 * longlong __stdcall __ftol(void)
 * Address ranges: 10007f28-10007f4e
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

