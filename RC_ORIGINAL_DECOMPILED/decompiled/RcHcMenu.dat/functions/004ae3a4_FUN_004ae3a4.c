/*
 * FUN_004ae3a4 at 004ae3a4
 * undefined __register FUN_004ae3a4(int * param_1, short * param_2, undefined1 param_3)
 * Address ranges: 004ae3a4-004ae3f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 40 for TCustomGDIButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 40 for
   TCustomGDIButton. Original bytes unchanged; names and types still inferred. */

void FUN_004ae3a4(int *param_1,short *param_2,undefined1 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
    if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
      FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    }
  }
  FUN_004a9010((int)param_1,param_2,param_3);
  return;
}

