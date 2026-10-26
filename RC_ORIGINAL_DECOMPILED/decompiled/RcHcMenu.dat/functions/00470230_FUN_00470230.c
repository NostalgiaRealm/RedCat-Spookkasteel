/*
 * FUN_00470230 at 00470230
 * undefined __register FUN_00470230(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00470230-00470283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470230(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x470243;
  piVar1 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
  puStack_14 = &LAB_00470284;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  FUN_00470bec(*(int *)(param_4 + -4),piVar1,0x11);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047028b;
  puStack_14 = (undefined1 *)0x470283;
  FUN_00403094(piVar1);
  return;
}

