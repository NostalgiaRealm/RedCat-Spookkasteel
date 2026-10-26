/*
 * FUN_0053854c at 0053854c
 * undefined __register FUN_0053854c(int * param_1)
 * Address ranges: 0053854c-00538599
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x536e34 slot 46 for TOAGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x536e34 slot 46 for
   TOAGridData. Original bytes unchanged; names and types still inferred. */

void FUN_0053854c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005381e4(param_1);
  if ((*(char *)(iVar1 + 0x2d8) != '\x01') &&
     (iVar1 = FUN_005381e4(param_1), *(char *)(iVar1 + 0x2d8) != '\x02')) {
    return;
  }
  piVar2 = (int *)FUN_005381e4(param_1);
  FUN_0053a034(piVar2);
  piVar2 = (int *)FUN_005381e4(param_1);
  iVar1 = FUN_0053881c(piVar2);
  (**(code **)(**(int **)(iVar1 + 0x68) + 0x74))();
  return;
}

