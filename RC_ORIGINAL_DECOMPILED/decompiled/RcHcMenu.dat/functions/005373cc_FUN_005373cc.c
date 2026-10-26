/*
 * FUN_005373cc at 005373cc
 * undefined __register FUN_005373cc(int * param_1)
 * Address ranges: 005373cc-0053742f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5369bc slot 3 for TOAGridColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5369bc slot 3 for
   TOAGridColumn. Original bytes unchanged; names and types still inferred. */

void FUN_005373cc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_005372a8(param_1);
  uVar3 = FUN_005374a4(piVar2);
  FUN_005394e4(uVar3,(int)param_1);
  piVar2 = (int *)FUN_005372a8(param_1);
  piVar2 = (int *)FUN_005374a4(piVar2);
  FUN_00539138(piVar2,(int)param_1);
  piVar2 = (int *)FUN_005372a8(param_1);
  piVar2 = (int *)FUN_005374a4(piVar2);
  iVar4 = FUN_00538860(piVar2);
  bVar1 = FUN_00438c84(iVar4);
  if (bVar1) {
    piVar2 = (int *)FUN_005372a8(param_1);
    piVar2 = (int *)FUN_005374a4(piVar2);
    FUN_0053951c(piVar2,(int)param_1);
  }
  return;
}

