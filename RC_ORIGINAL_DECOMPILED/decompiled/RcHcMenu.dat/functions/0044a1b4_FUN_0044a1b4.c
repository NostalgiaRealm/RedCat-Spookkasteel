/*
 * FUN_0044a1b4 at 0044a1b4
 * undefined __register FUN_0044a1b4(int param_1)
 * Address ranges: 0044a1b4-0044a1f4;0044a20c-0044a211
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a1b4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2c2) != 0) {
    puStack_1c = &LAB_0044a1f5;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

