/*
 * FUN_004721c0 at 004721c0
 * undefined __register FUN_004721c0(int param_1, undefined1 param_2, int * param_3, undefined4 param_4)
 * Address ranges: 004721c0-00472218;00472220-00472225
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004721c0(int param_1,undefined1 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (*(char *)((int)param_3 + 0x36) == '\0') {
    local_9 = *(undefined1 *)(param_1 + 0x8d);
    *(undefined1 *)(param_1 + 0x8d) = param_2;
    puStack_14 = &LAB_00472219;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    (**(code **)(*param_3 + 0xa4))(param_3,param_4);
    *in_FS_OFFSET = uStack_18;
    *(undefined1 *)(local_8 + 0x8d) = local_9;
    return;
  }
  return;
}

