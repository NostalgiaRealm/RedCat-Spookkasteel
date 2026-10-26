/*
 * FUN_00449ff4 at 00449ff4
 * undefined __register FUN_00449ff4(int * param_1)
 * Address ranges: 00449ff4-0044a05a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot -6 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot -6 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_00449ff4(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0040e444(*(int *)PTR_DAT_005725e4);
  FUN_004191b0((int)param_1);
  FUN_0041251c(*(int **)(DAT_005737d8 + 0x70),(int)param_1);
  FUN_004152b8((int)param_1,(char *)0x0);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0xc))();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if (*(char *)((int)param_1 + 0x217) != '\x01') {
    FUN_0044dc60(param_1,uVar2,uVar1);
  }
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}

