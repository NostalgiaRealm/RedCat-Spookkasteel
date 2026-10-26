/*
 * FUN_00513f00 at 00513f00
 * undefined __register FUN_00513f00(int * param_1)
 * Address ranges: 00513f00-00513f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 60 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 60 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513f00(int *param_1)

{
  int iVar1;
  
  FUN_005020ac(param_1);
  *(undefined1 *)(param_1 + 0x9e) = 0;
  iVar1 = FUN_00513f3c((int)param_1);
  FUN_004fcaf8(iVar1,(uint *)&DAT_00513f38);
  return;
}

