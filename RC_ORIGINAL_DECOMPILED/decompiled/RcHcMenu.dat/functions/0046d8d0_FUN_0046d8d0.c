/*
 * FUN_0046d8d0 at 0046d8d0
 * undefined __register FUN_0046d8d0(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0046d8d0-0046d8f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 53 for TObjectField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 53 for
   TObjectField. Original bytes unchanged; names and types still inferred. */

void FUN_0046d8d0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00468730(*(int *)(param_1 + 0xd0),param_2);
  (**(code **)(*piVar1 + 0x5c))(piVar1,param_3);
  return;
}

