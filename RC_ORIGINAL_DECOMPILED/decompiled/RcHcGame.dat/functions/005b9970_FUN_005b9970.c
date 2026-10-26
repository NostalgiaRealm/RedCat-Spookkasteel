/*
 * FUN_005b9970 at 005b9970
 * undefined FUN_005b9970(void)
 * Address ranges: 005b9970-005b9a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005cf410(*(undefined4 *)(param_1 + 0x3bc),(*(int *)(param_1 + 0x3b8) + 1) * 0xc);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x9d0,
                 &DAT_006b3f70,0);
    return 0;
  }
  *(int *)(param_1 + 0x3bc) = iVar1;
  *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x3b8) * 0xc) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 4 + *(int *)(param_1 + 0x3b8) * 0xc) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 8 + *(int *)(param_1 + 0x3b8) * 0xc) = param_4;
  iVar1 = FUN_005b52b0();
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x9d9,
                 &DAT_006b3f70,0);
    return 0;
  }
  *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
  FUN_005b3b70();
  return 1;
}

