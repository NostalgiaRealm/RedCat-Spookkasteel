/*
 * __global_unwind2 at 10027bb4
 * undefined __global_unwind2(void)
 * Address ranges: 10027bb4-10027bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10027bcc,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

