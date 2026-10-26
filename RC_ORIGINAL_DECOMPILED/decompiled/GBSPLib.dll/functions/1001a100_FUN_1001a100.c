/*
 * FUN_1001a100 at 1001a100
 * undefined FUN_1001a100(void)
 * Address ranges: 1001a100-1001a16e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001a100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_5 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else if (0x4f < param_5) goto LAB_1001a148;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_10020410();
    if (iVar1 == 0) {
      FUN_1001a1c0(*(undefined4 *)(param_1 + 0x14));
      return;
    }
  }
LAB_1001a148:
  uVar2 = FUN_100202e0(param_3,param_4,param_5);
  FUN_1001a1c0(uVar2);
  return;
}

