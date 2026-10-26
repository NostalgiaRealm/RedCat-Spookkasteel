/*
 * FUN_005844b0 at 005844b0
 * undefined FUN_005844b0(void)
 * Address ranges: 005844b0-005844b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005844b0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

