/*
 * FUN_004e7a50 at 004e7a50
 * undefined __register FUN_004e7a50(int * param_1, int * param_2)
 * Address ranges: 004e7a50-004e7a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 5 for TFloatProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 5 for
   TFloatProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e7a50(int *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x70))();
  iVar1 = FUN_004e7ab8((int)param_1);
  FUN_0040a9d0(2,0xf,*(undefined4 *)(iVar1 + 0x48),param_2);
  return;
}

