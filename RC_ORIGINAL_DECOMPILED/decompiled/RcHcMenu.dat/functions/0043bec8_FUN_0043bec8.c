/*
 * FUN_0043bec8 at 0043bec8
 * undefined __register FUN_0043bec8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0043bec8-0043bf32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043bec8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x43beda;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_18 = &LAB_0043bf33;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_c = FUN_00404030(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043bf3a;
  puStack_18 = (undefined1 *)0x43bf32;
  FUN_00403db0(&local_8);
  return;
}

