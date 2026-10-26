/*
 * FUN_0041fb50 at 0041fb50
 * undefined FUN_0041fb50(void)
 * Address ranges: 0041fb50-0041fb7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041fb50(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_2);
  if (cVar1 != '\0') {
    FUN_00422880(0);
  }
  FUN_00427ed0(param_2);
  return;
}

