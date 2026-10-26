/*
 * FUN_00417480 at 00417480
 * undefined __register FUN_00417480(int param_1, undefined4 param_2)
 * Address ranges: 00417480-00417495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 8 for TReader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 8 for TReader.
   Original bytes unchanged; names and types still inferred. */

void FUN_00417480(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x4a) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_1,param_2);
  }
  return;
}

