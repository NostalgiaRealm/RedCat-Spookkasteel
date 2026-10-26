/*
 * FUN_005bc090 at 005bc090
 * undefined FUN_005bc090(void)
 * Address ranges: 005bc090-005bc119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc090(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x33668) != 0) {
    iVar1 = FUN_005d6ce0(*(undefined4 *)(param_1 + 0x39058),*(undefined4 *)(param_1 + 0x33678),
                         *(undefined4 *)(param_1 + 0x390b4));
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x43c,
                   &DAT_006b3f70,0);
      return 0;
    }
    iVar1 = FUN_005bbfe0(param_1);
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x443,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  return 1;
}

