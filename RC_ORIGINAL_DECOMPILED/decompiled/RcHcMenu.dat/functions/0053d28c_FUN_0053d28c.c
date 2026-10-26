/*
 * FUN_0053d28c at 0053d28c
 * undefined __register FUN_0053d28c(int * param_1)
 * Address ranges: 0053d28c-0053d2bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 21 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 21 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d28c(int *param_1)

{
  int iVar1;
  
  FUN_0053d2c0(param_1);
  iVar1 = FUN_00549b64((int)param_1);
  iVar1 = FUN_004cecf8(*(int **)(param_1[0xd] + 4),*(int *)(iVar1 + 0x34));
  param_1[5] = iVar1;
  return;
}

