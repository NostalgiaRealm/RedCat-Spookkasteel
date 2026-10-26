/*
 * FUN_006035a1 at 006035a1
 * undefined FUN_006035a1(void)
 * Address ranges: 006035a1-006035c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_006035a1(undefined1 *param_1,undefined4 param_2)

{
  short sVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (sVar1 = FUN_006035c3(param_2), sVar1 != -1)) {
    return param_1;
  }
  *param_1 = 1;
  return param_1;
}

