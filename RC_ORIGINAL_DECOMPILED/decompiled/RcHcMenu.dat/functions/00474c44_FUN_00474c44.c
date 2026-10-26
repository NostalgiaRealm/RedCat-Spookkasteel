/*
 * FUN_00474c44 at 00474c44
 * undefined __register FUN_00474c44(undefined * param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 00474c44-00474ce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00474c44(undefined *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_10;
  int local_c;
  undefined *local_8;
  
  local_10 = (undefined *)0x0;
  puStack_1c = (undefined1 *)0x474c5e;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_20 = &LAB_00474ce2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = **(int **)(param_4 + -4);
  puStack_1c = &stack0xfffffffc;
  piVar1 = FUN_00403db0((int *)&local_10);
  FUN_00475158(&local_c,piVar1,*(undefined1 *)(param_4 + -5));
  iVar2 = FUN_00409870(local_8,local_10);
  if (iVar2 == 0) {
    puStack_30 = local_10;
    FUN_004040f0(param_2,3);
    **(int **)(param_4 + -4) = local_c;
  }
  *in_FS_OFFSET = puStack_30;
  FUN_00403db0((int *)&local_10);
  FUN_00403db0((int *)&local_8);
  return;
}

