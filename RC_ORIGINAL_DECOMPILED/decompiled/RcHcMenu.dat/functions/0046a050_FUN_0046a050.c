/*
 * FUN_0046a050 at 0046a050
 * undefined __register FUN_0046a050(int param_1, undefined4 param_2)
 * Address ranges: 0046a050-0046a0af;0046a0b7-0046a0ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a050(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0xba) != 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x54) = param_2;
    }
    *(undefined1 *)(param_1 + 0x3a) = 1;
    puStack_14 = &LAB_0046a0b0;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0xbc),param_1);
    *in_FS_OFFSET = uStack_18;
    *(undefined1 *)(param_1 + 0x3a) = 0;
    return;
  }
  return;
}

