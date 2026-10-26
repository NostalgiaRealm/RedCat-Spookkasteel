/*
 * FUN_0042f92c at 0042f92c
 * HANDLE __register FUN_0042f92c(HWND param_1)
 * Address ranges: 0042f92c-0042f944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_0042f92c(HWND param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = (HANDLE)0x0;
  if (param_1 != (HWND)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0057375a);
  }
  return pvVar1;
}

