/*
 * FUN_005586f8 at 005586f8
 * int * __register FUN_005586f8(int * param_1)
 * Address ranges: 005586f8-005587d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 59 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 59 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

int * FUN_005586f8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_c;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xf8))();
  local_c = (int *)0x0;
  uVar2 = FUN_0040320c(piVar1,(int)&LAB_0049893c);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0049f730);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_00403224(piVar1,(int)&PTR_FUN_0049f730);
      local_c = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*local_c + 0x3c))(local_c,(char)param_1[0x6d]);
      FUN_0049b9c0(local_c,*(char *)((int)param_1 + 0x1b5));
      FUN_0049b988(local_c,param_1[0x6e]);
    }
  }
  else {
    local_c = (int *)FUN_00403224(piVar1,(int)&LAB_0049893c);
    (**(code **)(*local_c + 0x3c))(local_c,(char)param_1[0x6d]);
    FUN_0049b9c0(local_c,*(char *)((int)param_1 + 0x1b5));
    FUN_0049b988(local_c,param_1[0x6e]);
  }
  return local_c;
}

