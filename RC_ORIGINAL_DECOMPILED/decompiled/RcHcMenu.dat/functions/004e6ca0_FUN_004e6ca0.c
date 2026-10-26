/*
 * FUN_004e6ca0 at 004e6ca0
 * undefined __register FUN_004e6ca0(int param_1, int param_2)
 * Address ranges: 004e6ca0-004e6cdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 20 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 20 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6ca0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_00406aa0((int *)(param_1 + 0x20));
  piVar1 = FUN_0041998c((int *)&PTR_FUN_00411144,'\x01',param_2,0);
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 5;
  }
  uVar2 = FUN_004e6efc(piVar1);
  FUN_0045eb1c(uVar2);
  return;
}

