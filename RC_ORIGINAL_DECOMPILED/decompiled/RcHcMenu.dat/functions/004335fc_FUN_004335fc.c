/*
 * FUN_004335fc at 004335fc
 * undefined __register FUN_004335fc(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 004335fc-00433629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004335fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(short *)(param_1 + 0xb2) != 0) {
    (**(code **)(param_1 + 0xb0))
              (*(undefined4 *)(param_1 + 0xb4),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}

