/*
 * FUN_005ba640 at 005ba640
 * undefined FUN_005ba640(void)
 * Address ranges: 005ba640-005ba688
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba640(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005d6ce0(*(undefined4 *)(param_1 + 0xc1c),param_2,param_3);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xddf,
                 &DAT_006b3f70,0);
    return 0;
  }
  return 1;
}

