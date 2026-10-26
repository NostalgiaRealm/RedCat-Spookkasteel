/*
 * __global_unwind2 at 10009170
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 10009170-1000918f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10009188,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

