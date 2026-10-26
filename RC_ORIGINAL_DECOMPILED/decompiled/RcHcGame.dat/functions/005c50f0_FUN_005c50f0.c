/*
 * FUN_005c50f0 at 005c50f0
 * undefined FUN_005c50f0(void)
 * Address ranges: 005c50f0-005c518f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005c50f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_6 < 0x50) {
    iVar1 = FUN_005c6ab0();
    if (iVar1 != 0) goto LAB_005c5126;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_005c5190(*(undefined4 *)(param_1 + 0x14));
      return uVar2;
    }
  }
  else {
LAB_005c5126:
    if (*(int *)(param_1 + 0x10) != 0) {
      if (param_2 == *(int *)(param_1 + 0x18)) {
        return 0;
      }
      uVar3 = FUN_005c6900(param_4,param_5,param_6);
      if (uVar3 == *(uint *)(param_1 + 0x14)) {
        uVar2 = FUN_005c5190(uVar3 ^ 1);
        return uVar2;
      }
      goto LAB_005c5180;
    }
  }
  uVar3 = FUN_005c6900(param_4,param_5,param_6);
LAB_005c5180:
  uVar2 = FUN_005c5190(uVar3);
  return uVar2;
}

