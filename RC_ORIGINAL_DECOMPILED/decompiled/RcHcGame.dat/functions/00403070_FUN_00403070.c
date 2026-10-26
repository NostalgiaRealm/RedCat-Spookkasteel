/*
 * FUN_00403070 at 00403070
 * undefined FUN_00403070(void)
 * Address ranges: 00403070-004030a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00403070(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_00402a80(param_2,param_3);
  FUN_00402d20(uVar2,uVar3);
  iVar1 = FUN_00402cf0();
  if (iVar1 != 5) {
    (**(code **)(*param_1 + 0xc))(param_2,param_3);
  }
  return;
}

