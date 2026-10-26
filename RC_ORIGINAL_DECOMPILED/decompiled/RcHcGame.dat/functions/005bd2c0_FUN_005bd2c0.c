/*
 * FUN_005bd2c0 at 005bd2c0
 * undefined FUN_005bd2c0(void)
 * Address ranges: 005bd2c0-005bd3a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005bd2c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x3905c + param_5 * 4) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x34))(param_4,param_1 + 0x39078 + param_5 * 8)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_005c6a90();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x34))(1,param_1 + 0x390a0);
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x33678) + 0x38))();
      return 0;
    }
    (**(code **)(*(int *)(param_1 + 0x33678) + 0x44))();
  }
  if ((*(uint *)(param_1 + 0x3907c + param_3 * 8) & 0x10000) != 0) {
    iVar2 = FUN_005bd2c0(param_1,unaff_retaddr,param_1,param_4,6);
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x33678) + 0x38))();
      return 0;
    }
    (**(code **)(*(int *)(param_1 + 0x33678) + 0x4c))();
  }
  return iVar1;
}

