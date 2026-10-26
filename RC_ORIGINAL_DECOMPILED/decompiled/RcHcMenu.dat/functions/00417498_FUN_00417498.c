/*
 * FUN_00417498 at 00417498
 * undefined __register FUN_00417498(int param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 00417498-004174bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 7 for TReader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 7 for TReader.
   Original bytes unchanged; names and types still inferred. */

void FUN_00417498(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x18))(param_2,*param_3);
  return;
}

