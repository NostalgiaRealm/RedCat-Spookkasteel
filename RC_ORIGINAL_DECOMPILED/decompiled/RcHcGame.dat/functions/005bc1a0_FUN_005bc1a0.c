/*
 * FUN_005bc1a0 at 005bc1a0
 * undefined FUN_005bc1a0(void)
 * Address ranges: 005bc1a0-005bc214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc1a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005bc120(param_1);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x46d,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x28))();
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x474,
                 &DAT_006b3f70,0);
    return 0;
  }
  FUN_005bb660(param_1);
  return 1;
}

