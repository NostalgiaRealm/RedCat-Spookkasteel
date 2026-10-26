/*
 * FUN_005bc340 at 005bc340
 * undefined FUN_005bc340(void)
 * Address ranges: 005bc340-005bc393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc340(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x336c0) != 0) {
    iVar1 = FUN_005bb8e0(param_1,*(int *)(param_1 + 0x336c0));
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x4ff,
                   &DAT_006b3f70,0);
      return 0;
    }
    FUN_005c02b0();
  }
  return 1;
}

