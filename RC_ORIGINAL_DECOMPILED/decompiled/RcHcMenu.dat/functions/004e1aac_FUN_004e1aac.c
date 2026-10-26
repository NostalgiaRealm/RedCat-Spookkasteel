/*
 * FUN_004e1aac at 004e1aac
 * undefined __register FUN_004e1aac(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004e1aac-004e1ae4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot published:btnCloseClick for TfrmBalloon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot
   published:btnCloseClick for TfrmBalloon. Original bytes unchanged; names and types still
   inferred. */

void FUN_004e1aac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0044dc60(param_1,param_2,param_3);
  if (*(short *)((int)param_1 + 0x30a) != 0) {
    (*(code *)param_1[0xc2])(param_1[0xc3],param_1);
  }
  return;
}

