/*
 * FUN_0047c57c at 0047c57c
 * undefined __register FUN_0047c57c(void)
 * Address ranges: 0047c57c-0047c5b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047c57c(void)

{
  FARPROC pFVar1;
  HMODULE in_stack_00000004;
  
  pFVar1 = GetProcAddress(in_stack_00000004,s_DLLEXITFUNCTION_0057144b);
  if (pFVar1 == (FARPROC)0x0) {
    pFVar1 = GetProcAddress(in_stack_00000004,s_DLLEXITFUNCTION2_0057145b);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
  }
  else {
    (*pFVar1)();
  }
  return;
}

