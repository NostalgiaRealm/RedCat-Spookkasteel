/*
 * FUN_0042d59c at 0042d59c
 * undefined __register FUN_0042d59c(int param_1, int * param_2)
 * Address ranges: 0042d59c-0042d5f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d59c(int param_1,int *param_2)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x42d5af;
  FUN_0042d304(param_1);
  puStack_18 = &LAB_0042d5f1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  pvVar1 = GetClipboardData(3);
  pvVar2 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,3),pvVar1);
  *in_FS_OFFSET = pvVar2;
  puStack_18 = &LAB_0042d5f8;
  uStack_1c = 0x42d5f0;
  FUN_0042d2d8(param_1);
  return;
}

