/*
 * FUN_004499b0 at 004499b0
 * undefined __register FUN_004499b0(int * param_1, int param_2)
 * Address ranges: 004499b0-00449a19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004499b0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  param_1[0x7f] = param_1[0x7f] + 1;
  puStack_14 = &LAB_00449a1a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00436dd8(param_1,param_2);
  uVar2 = 0;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,uVar2);
  *in_FS_OFFSET = uStack_18;
  param_1[0x7f] = param_1[0x7f] + -1;
  return;
}

