/*
 * FUN_005533e8 at 005533e8
 * undefined __register FUN_005533e8(int * param_1, int param_2)
 * Address ranges: 005533e8-00553450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 57 for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 57 for
   TGameMenuScreen. Original bytes unchanged; names and types still inferred. */

void FUN_005533e8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00402fdc(param_1);
  FUN_004121d8(DAT_00574854,iVar1);
  piVar2 = (int *)FUN_00552264(param_2);
  piVar2 = (int *)FUN_00403224(piVar2,(int)&PTR_FUN_00552ac8);
  iVar1 = FUN_00402fdc(param_1);
  piVar2[0xbf] = iVar1;
  (**(code **)(*param_1 + 0xec))();
  (**(code **)(*piVar2 + 0xf0))();
  FUN_0044dcfc(param_1);
  return;
}

