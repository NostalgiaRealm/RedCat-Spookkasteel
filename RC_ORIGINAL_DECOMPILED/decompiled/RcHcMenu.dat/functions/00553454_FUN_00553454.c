/*
 * FUN_00553454 at 00553454
 * undefined __register FUN_00553454(int * param_1)
 * Address ranges: 00553454-005534da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 58 for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 58 for
   TGameMenuScreen. Original bytes unchanged; names and types still inferred. */

void FUN_00553454(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  
  if (0 < DAT_00574854[2]) {
    iVar3 = DAT_00574854[2] + -1;
    if (SBORROW4(DAT_00574854[2],1)) {
      thunk_FUN_00402874((uint)DAT_00574854);
      iVar3 = extraout_EDX;
    }
    iVar1 = FUN_00412384(DAT_00574854,iVar3);
    iVar3 = DAT_00574854[2] + -1;
    if (SBORROW4(DAT_00574854[2],1)) {
      thunk_FUN_00402874((uint)DAT_00574854);
      iVar3 = extraout_EDX_00;
    }
    FUN_00412224(DAT_00574854,iVar3);
    piVar2 = (int *)FUN_00552264(iVar1);
    piVar2 = (int *)FUN_00403224(piVar2,(int)&PTR_FUN_00552ac8);
    (**(code **)(*piVar2 + 0xf0))();
    (**(code **)(*param_1 + 0xec))();
    FUN_0044dcfc(param_1);
  }
  return;
}

