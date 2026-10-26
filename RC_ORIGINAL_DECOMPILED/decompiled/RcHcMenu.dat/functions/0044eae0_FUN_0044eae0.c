/*
 * FUN_0044eae0 at 0044eae0
 * undefined __register FUN_0044eae0(int param_1)
 * Address ranges: 0044eae0-0044eb17;0044eb2f-0044eb34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044eae0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x3a) != 0) {
    puStack_1c = &LAB_0044eb18;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

