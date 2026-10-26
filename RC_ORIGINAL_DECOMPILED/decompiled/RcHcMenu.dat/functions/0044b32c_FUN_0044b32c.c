/*
 * FUN_0044b32c at 0044b32c
 * HANDLE __register FUN_0044b32c(int param_1)
 * Address ranges: 0044b32c-0044b35e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_0044b32c(int param_1)

{
  HANDLE pvVar1;
  HWND pHVar2;
  
  pvVar1 = (HANDLE)0x0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    pHVar2 = (HWND)SendMessageA(*(HWND *)(param_1 + 0x23c),0x229,0,0);
    pvVar1 = FUN_0042f92c(pHVar2);
  }
  return pvVar1;
}

