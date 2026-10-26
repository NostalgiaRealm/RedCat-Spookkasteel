/*
 * FUN_0042d534 at 0042d534
 * undefined __register FUN_0042d534(int param_1, int * param_2)
 * Address ranges: 0042d534-0042d58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d534(int param_1,int *param_2)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x42d548;
  FUN_0042d304(param_1);
  puStack_1c = &LAB_0042d58c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  pvVar1 = GetClipboardData(2);
  pvVar2 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,2),pvVar1);
  *in_FS_OFFSET = pvVar2;
  puStack_1c = &LAB_0042d593;
  uStack_20 = 0x42d58b;
  FUN_0042d2d8(param_1);
  return;
}

