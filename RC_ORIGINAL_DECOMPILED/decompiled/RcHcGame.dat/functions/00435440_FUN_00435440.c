/*
 * FUN_00435440 at 00435440
 * undefined FUN_00435440(void)
 * Address ranges: 00435440-0043547a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00435440(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  iVar1 = FUN_00459330();
  uVar2 = (undefined3)((uint)(iVar1 + -7) >> 8);
  switch(iVar1 + -7) {
  case 0:
  case 1:
  case 3:
  case 4:
    *(undefined1 *)(param_1 + 0x371) = 1;
    return CONCAT31(uVar2,*(undefined1 *)(param_1 + 0x371));
  default:
    *(undefined1 *)(param_1 + 0x371) = 0;
    return CONCAT31(uVar2,*(undefined1 *)(param_1 + 0x371));
  }
}

