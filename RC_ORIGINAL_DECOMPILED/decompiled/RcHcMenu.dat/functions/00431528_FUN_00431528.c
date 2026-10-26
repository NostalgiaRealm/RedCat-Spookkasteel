/*
 * FUN_00431528 at 00431528
 * undefined __register FUN_00431528(int * param_1, int * param_2)
 * Address ranges: 00431528-00431570
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42def4 slot 0 for TSizeConstraints. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42def4 slot 0 for
   TSizeConstraints. Original bytes unchanged; names and types still inferred. */

void FUN_00431528(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0042def4);
  if ((char)uVar2 != '\0') {
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    iVar1 = param_1[2];
    param_2[2] = iVar1;
    FUN_00403270(param_2,iVar1,extraout_ECX);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

