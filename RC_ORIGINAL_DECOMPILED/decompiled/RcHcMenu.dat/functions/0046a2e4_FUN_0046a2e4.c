/*
 * FUN_0046a2e4 at 0046a2e4
 * undefined __register FUN_0046a2e4(int * param_1)
 * Address ranges: 0046a2e4-0046a32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 19 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 19 for
   TStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a2e4(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  double local_c;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0046a32c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x58))(param_1,&local_10);
  FUN_0040c5dc(local_10);
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046a333;
  puStack_1c = (undefined1 *)0x46a32b;
  FUN_00403db0(&local_10);
  return;
}

