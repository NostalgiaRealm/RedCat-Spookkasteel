/*
 * FUN_0047f88c at 0047f88c
 * undefined __register FUN_0047f88c(char param_1)
 * Address ranges: 0047f88c-0047f8de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f88c(char param_1)

{
  DWORD DVar1;
  
  if (DAT_00571530 != 0) {
    if ((param_1 == '\0') && (DVar1 = GetTickCount(), DVar1 - _DAT_00571538 <= DAT_00571534)) {
      return;
    }
    KillTimer((HWND)0x0,(uint)DAT_00571530);
    DAT_00571530 = 0;
    _DAT_00571538 = 0;
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,0);
  }
  return;
}

