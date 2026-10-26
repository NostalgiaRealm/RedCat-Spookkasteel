/*
 * __global_unwind2 at 1000fd34
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 1000fd34-1000fd53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000fd4c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

