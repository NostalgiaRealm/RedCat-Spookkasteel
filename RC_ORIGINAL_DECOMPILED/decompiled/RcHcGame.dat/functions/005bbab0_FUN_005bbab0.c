/*
 * FUN_005bbab0 at 005bbab0
 * undefined FUN_005bbab0(void)
 * Address ranges: 005bbab0-005bbb3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005bbab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00453600();
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x33678);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x33678);
  }
  iVar1 = (**(code **)(iVar1 + 0x84))(param_3,param_4);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x26b,
                 &DAT_006b3f70,0);
  }
  return iVar1;
}

