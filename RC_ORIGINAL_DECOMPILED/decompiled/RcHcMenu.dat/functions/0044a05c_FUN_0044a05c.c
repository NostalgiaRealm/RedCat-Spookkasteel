/*
 * FUN_0044a05c at 0044a05c
 * undefined __register FUN_0044a05c(int * param_1, char param_2)
 * Address ranges: 0044a05c-0044a125
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a05c(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x44a067;
  local_8 = FUN_00403434(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    puStack_10 = (undefined1 *)0x44a082;
    FUN_0040e444(*(int *)PTR_DAT_005725e4);
  }
  puStack_14 = &LAB_0044a126;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x87] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc4))();
  }
  FUN_0044c708((int)local_8,'\0');
  bVar1 = FUN_00438c84((int)local_8);
  if (bVar1) {
    (**(code **)(*local_8 + 0x9c))();
  }
  FUN_0044f1e8(DAT_005737d8,(int)local_8);
  FUN_00403094((int *)local_8[0x88]);
  FUN_00403094((int *)local_8[0x8a]);
  FUN_0040e4b4(local_8 + 0xb2);
  FUN_00449430(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0044a12d;
  puStack_14 = (undefined1 *)0x44a125;
  FUN_0040e490(*(int *)PTR_DAT_005725e4);
  return;
}

