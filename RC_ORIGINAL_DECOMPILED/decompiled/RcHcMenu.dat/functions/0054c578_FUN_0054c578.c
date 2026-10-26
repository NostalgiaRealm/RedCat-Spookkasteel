/*
 * FUN_0054c578 at 0054c578
 * undefined __register FUN_0054c578(undefined4 * param_1)
 * Address ranges: 0054c578-0054c5d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54c038 slot published:BalloonShow for TfrmAgent. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54c038 slot
   published:BalloonShow for TfrmAgent. Original bytes unchanged; names and types still inferred. */

void FUN_0054c578(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1[0xc6] + 0x47) == '\0') {
    *(undefined1 *)(param_1 + 0xd2) = 0;
    FUN_0054d210((int)param_1,1);
    FUN_0054c75c(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xd2) = 1;
    FUN_0054d210((int)param_1,0);
    FUN_0044dc60((int *)param_1[0xc6],extraout_EDX,extraout_ECX);
  }
  return;
}

