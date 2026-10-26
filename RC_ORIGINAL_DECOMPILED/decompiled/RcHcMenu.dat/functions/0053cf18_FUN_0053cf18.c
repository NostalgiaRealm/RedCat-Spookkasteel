/*
 * FUN_0053cf18 at 0053cf18
 * undefined __register FUN_0053cf18(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0053cf18-0053cfb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053cf18(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x53cf27;
  local_8 = (int *)param_3;
  piVar1 = (int *)FUN_00549b80(*(int *)(param_4 + -4));
  puStack_c = (undefined1 *)0x53cf37;
  FUN_004d1dc8(*(int **)(*(int *)(param_4 + -4) + 0x34),piVar1);
  if (*(char *)(*(int *)(param_4 + -4) + 0x10) == '\0') {
    *(undefined4 *)(*(int *)(param_4 + -4) + 0x8c) = 0x80000000;
    *(undefined1 *)(*(int *)(param_4 + -4) + 0x85) = 0;
  }
  puStack_c = (undefined1 *)0x53cf6e;
  local_8 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_10 = &LAB_0053cfba;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  piVar1 = (int *)FUN_00549b80(*(int *)(param_4 + -4));
  FUN_00493768(local_8,piVar1);
  FUN_0053ce30(*(int **)(param_4 + -4),local_8,'\0');
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0053cfc1;
  puStack_10 = (undefined1 *)0x53cfb9;
  FUN_00403094(local_8);
  return;
}

