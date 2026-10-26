/*
 * FUN_004155b4 at 004155b4
 * uint __register FUN_004155b4(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004155b4-004155d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 4 for TReader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411230 slot 4 for TReader.
   Original bytes unchanged; names and types still inferred. */

uint FUN_004155b4(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x5a) != 0) {
    param_1 = (**(code **)(param_1 + 0x58))
                        (*(undefined4 *)(param_1 + 0x5c),param_1,param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}

