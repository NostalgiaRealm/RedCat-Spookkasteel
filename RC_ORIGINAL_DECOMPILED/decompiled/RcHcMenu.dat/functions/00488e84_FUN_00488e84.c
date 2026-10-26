/*
 * FUN_00488e84 at 00488e84
 * undefined __register FUN_00488e84(int param_1, int * param_2)
 * Address ranges: 00488e84-00488eca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488e84(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_00488ecb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))(*(int **)(param_1 + 0x238),&local_8);
  FUN_004754a4(local_8,param_2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00488ed2;
  puStack_18 = (undefined1 *)0x488eca;
  FUN_00403db0((int *)&local_8);
  return;
}

