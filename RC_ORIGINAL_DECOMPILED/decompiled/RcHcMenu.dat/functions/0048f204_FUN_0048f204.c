/*
 * FUN_0048f204 at 0048f204
 * char __register FUN_0048f204(int * param_1, int param_2, byte * param_3)
 * Address ranges: 0048f204-0048f24c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 6 for TAppInfoPropRefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 6 for
   TAppInfoPropRefList. Original bytes unchanged; names and types still inferred. */

char FUN_0048f204(int *param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0048eef0(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)param_1[7])((undefined4 *)param_1[7],1);
    (**(code **)(*(int *)param_1[8] + 0x24))((int *)param_1[8],param_2,uVar2);
  }
  return (char)uVar1;
}

