/*
 * FUN_0044e5bc at 0044e5bc
 * undefined __register FUN_0044e5bc(int * param_1)
 * Address ranges: 0044e5bc-0044e607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447ba4 slot 3 for TCustomDockForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447ba4 slot 3 for
   TCustomDockForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044e5bc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_0043579c((int)param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x40))(param_1,auStack_20);
      piVar2 = (int *)FUN_00435760((int)param_1,iVar3);
      FUN_00403270(piVar2,param_1,auStack_20);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0044a214(param_1);
  return;
}

