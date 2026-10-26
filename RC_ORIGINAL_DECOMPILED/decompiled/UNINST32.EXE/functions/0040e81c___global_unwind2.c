/*
 * __global_unwind2 at 0040e81c
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 0040e81c-0040e83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x40e834,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

