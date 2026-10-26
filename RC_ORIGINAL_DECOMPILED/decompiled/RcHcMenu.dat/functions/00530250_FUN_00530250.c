/*
 * FUN_00530250 at 00530250
 * undefined __register FUN_00530250(int param_1)
 * Address ranges: 00530250-005302fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 65 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 65 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00530250(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x294) != 0) {
    piVar1 = (int *)FUN_00533c14(param_1);
    FUN_00528810(piVar1,(int *)0x0);
    if (*(char *)(*(int *)(param_1 + 0x294) + 0x18) != '\0') {
      FUN_00549a9c(*(int **)(param_1 + 0x294));
    }
    FUN_00403094(*(int **)(param_1 + 0x294));
    FUN_00532f2c(param_1,0);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_00403094(*(int **)(param_1 + 0x2d4));
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  if (*(int *)(param_1 + 0x2d0) != 0) {
    FUN_00403094(*(int **)(param_1 + 0x2d0));
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  FUN_005025d4();
  return;
}

