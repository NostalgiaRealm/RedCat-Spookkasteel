/*
 * FUN_0045cad0 at 0045cad0
 * undefined __register FUN_0045cad0(int * param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 0045cad0-0045cb1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045cad0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045cb1f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040bd00(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_0045cb26;
  iStack_20 = 0x45cb1e;
  FUN_00403db0(&local_8);
  return;
}

