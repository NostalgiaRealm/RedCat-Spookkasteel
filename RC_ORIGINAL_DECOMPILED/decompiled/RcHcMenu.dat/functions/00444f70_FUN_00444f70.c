/*
 * FUN_00444f70 at 00444f70
 * undefined __register FUN_00444f70(int * param_1)
 * Address ranges: 00444f70-00444f99;00444fb3-00444fb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444f70(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00444f9a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x10))();
  *in_FS_OFFSET = uStack_20;
  return;
}

