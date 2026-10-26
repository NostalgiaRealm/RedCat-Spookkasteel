/*
 * FUN_004f7cb0 at 004f7cb0
 * undefined __register FUN_004f7cb0(int param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 004f7cb0-004f7dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7cb0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  WPARAM WVar4;
  HWND pHVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f7dcf;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined1 *)(*(int *)(param_4 + -4) + 0x1f8) = 1;
  puStack_24 = &LAB_004f7dac;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = (int *)FUN_00412fac(*(int *)(*(int *)(param_4 + -4) + 0x1f0),*(int *)(param_1 + 8));
  iVar2 = FUN_00412ca4(param_2);
  (**(code **)(*piVar1 + 0x10))(piVar1,iVar2);
  FUN_0041300c(*(int *)(*(int *)(param_4 + -4) + 0x1f0));
  FUN_00406454(&local_8,(int)&LAB_004f7c9c,1);
  iVar2 = FUN_0041300c(*(int *)(*(int *)(param_4 + -4) + 0x1f0));
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_004f6c58(*(int *)(*(int *)(param_4 + -4) + 0x1f0),iVar6);
      *(undefined4 *)(local_8 + iVar6 * 4) = *(undefined4 *)(iVar3 + 8);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  WVar4 = FUN_0041300c(*(int *)(*(int *)(param_4 + -4) + 0x1f0));
  pHVar5 = (HWND)FUN_00438988(*(int **)(param_4 + -4));
  FUN_00423924(pHVar5,WVar4,local_8);
  *in_FS_OFFSET = uStack_28;
  *(undefined1 *)(*(int *)(param_4 + -4) + 0x1f8) = 0;
  return;
}

