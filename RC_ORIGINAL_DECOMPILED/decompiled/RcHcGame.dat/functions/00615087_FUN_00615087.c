/*
 * FUN_00615087 at 00615087
 * undefined FUN_00615087(void)
 * Address ranges: 00615087-006150ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00615087(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)param_1[1]) {
      iVar1 = (**(code **)*param_1)();
      iVar2 = iVar2 + iVar1;
    }
  }
  return iVar2;
}

