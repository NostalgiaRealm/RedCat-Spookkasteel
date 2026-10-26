/*
 * FUN_005bc120 at 005bc120
 * undefined FUN_005bc120(void)
 * Address ranges: 005bc120-005bc191
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc120(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d6d90(*(undefined4 *)(param_1 + 0x39058));
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x454,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005bbda0(param_1);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x45b,
                 &DAT_006b3f70,0);
    return 0;
  }
  return 1;
}

