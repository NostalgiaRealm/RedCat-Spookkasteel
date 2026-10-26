/*
 * FUN_004558dc at 004558dc
 * undefined __register FUN_004558dc(char param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004558dc-00455910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004558dc(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + -4) = 0x80000014;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -4) = 0x80000010;
  }
  *(undefined4 *)(param_4 + -8) = 0x80000010;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -8) = 0x80000014;
  }
  return;
}

