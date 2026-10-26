/*
 * FUN_005c0bb0 at 005c0bb0
 * undefined FUN_005c0bb0(void)
 * Address ranges: 005c0bb0-005c0bdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c0bb0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 < 1) {
    return 1;
  }
  do {
    iVar1 = FUN_005c0d70();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}

