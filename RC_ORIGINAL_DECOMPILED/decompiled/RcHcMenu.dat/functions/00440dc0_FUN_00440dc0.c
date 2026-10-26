/*
 * FUN_00440dc0 at 00440dc0
 * undefined __register FUN_00440dc0(int param_1, int * param_2)
 * Address ranges: 00440dc0-00440dd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 0 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 0 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00440dc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0043fcd8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

