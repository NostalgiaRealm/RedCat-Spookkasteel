/*
 * FUN_0047c546 at 0047c546
 * undefined __register FUN_0047c546(void)
 * Address ranges: 0047c546-0047c57b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047c546(void)

{
  FARPROC pFVar1;
  HMODULE in_stack_00000008;
  
  pFVar1 = GetProcAddress(in_stack_00000008,s_DLLINITFUNCTION_0057142f);
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
  }
  return;
}

