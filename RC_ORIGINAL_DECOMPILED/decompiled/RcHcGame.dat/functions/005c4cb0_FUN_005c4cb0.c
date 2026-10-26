/*
 * FUN_005c4cb0 at 005c4cb0
 * undefined FUN_005c4cb0(void)
 * Address ranges: 005c4cb0-005c4d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c4cb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_005c4aa0();
  }
  else {
    iVar1 = FUN_005c4bd0(*(undefined4 *)(param_1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_005c5040();
  if (iVar2 == 0) {
    FUN_005c4d10();
    return 0;
  }
  return iVar1;
}

