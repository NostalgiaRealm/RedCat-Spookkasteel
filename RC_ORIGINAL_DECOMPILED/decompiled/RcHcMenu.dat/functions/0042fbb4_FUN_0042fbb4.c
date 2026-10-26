/*
 * FUN_0042fbb4 at 0042fbb4
 * HANDLE __register FUN_0042fbb4(void)
 * Address ranges: 0042fbb4-0042fbdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_0042fbb4(void)

{
  HWND pHVar1;
  HANDLE pvVar2;
  
  pHVar1 = GetCapture();
  pvVar2 = FUN_0042f92c(pHVar1);
  if (((pvVar2 != (HANDLE)0x0) && (DAT_0056f858 != (HANDLE)0x0)) &&
     (pvVar2 == *(HANDLE *)((int)DAT_0056f858 + 0x24))) {
    pvVar2 = DAT_0056f858;
  }
  return pvVar2;
}

