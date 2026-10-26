/*
 * FUN_0049eed4 at 0049eed4
 * undefined __register FUN_0049eed4(int param_1, int * param_2)
 * Address ranges: 0049eed4-0049ef3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e980 slot 5 for TDaviAnimationProperties. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e980 slot 5 for
   TDaviAnimationProperties. Original bytes unchanged; names and types still inferred. */

void FUN_0049eed4(int param_1,int *param_2)

{
  FUN_0041483c(param_2,param_1 + 4,4);
  FUN_0041483c(param_2,param_1 + 8,4);
  FUN_0041483c(param_2,param_1 + 0xc,4);
  FUN_0041483c(param_2,param_1 + 0x10,4);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(int **)(param_1 + 0x14),param_2);
  return;
}

