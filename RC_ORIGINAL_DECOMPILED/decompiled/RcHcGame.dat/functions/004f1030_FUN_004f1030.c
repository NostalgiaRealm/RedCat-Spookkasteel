/*
 * FUN_004f1030 at 004f1030
 * undefined FUN_004f1030(void)
 * Address ranges: 004f1030-004f1085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f1030(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280(param_1);
  }
  iVar1 = FUN_004b27a0();
  if (0x1e0 < iVar1) {
    __ftol(0x1e0);
    return;
  }
  if (iVar1 < 0xf0) {
    iVar1 = 0xf0;
  }
  __ftol(iVar1);
  return;
}

