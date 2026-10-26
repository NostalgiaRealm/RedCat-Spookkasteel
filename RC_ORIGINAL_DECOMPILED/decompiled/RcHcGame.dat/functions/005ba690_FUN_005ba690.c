/*
 * FUN_005ba690 at 005ba690
 * undefined FUN_005ba690(void)
 * Address ranges: 005ba690-005ba6ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d6d90(*(undefined4 *)(param_1 + 0xc1c));
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xdf0,
                 &DAT_006b3f70,0);
    return 0;
  }
  return 1;
}

