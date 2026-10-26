/*
 * __ftol at 0060ab20
 * undefined __ftol(void)
 * Address ranges: 0060ab20-0060ab46
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

