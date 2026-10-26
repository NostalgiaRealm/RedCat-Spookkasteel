/*
 * FUN_005ba560 at 005ba560
 * undefined FUN_005ba560(void)
 * Address ranges: 005ba560-005ba5c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba560(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc1c) == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xd7e,
                 &DAT_006b3f70,0);
    return 0;
  }
  FUN_005c1be0();
  iVar1 = FUN_005d6df0(*(undefined4 *)(param_1 + 0xc1c),param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc54) = 1;
  }
  return 1;
}

