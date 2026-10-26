/*
 * FUN_0048f250 at 0048f250
 * undefined4 __register FUN_0048f250(int * param_1, byte * param_2)
 * Address ranges: 0048f250-0048f29d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 4 for TAppInfoPropRefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 4 for
   TAppInfoPropRefList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0048f250(int *param_1,byte *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  undefined1 local_d;
  
  cVar1 = FUN_0048ef44(param_1,param_2);
  if (cVar1 == '\0') {
    local_d = 0;
    uVar3 = extraout_var;
  }
  else {
    uVar2 = FUN_0048eaf4(param_1,param_2);
    (**(code **)(*(int *)param_1[8] + 0x10))((int *)param_1[8],uVar2);
    local_d = FUN_0048ee44(param_1,param_2);
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,local_d);
}

