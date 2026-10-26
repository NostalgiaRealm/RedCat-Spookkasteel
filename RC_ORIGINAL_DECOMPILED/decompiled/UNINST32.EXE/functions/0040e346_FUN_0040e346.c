/*
 * FUN_0040e346 at 0040e346
 * int * __cdecl FUN_0040e346(int param_1)
 * Address ranges: 0040e346-0040e388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_0040e346(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004132b0;
  if (DAT_004132b0 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004132b0 + DAT_00413330 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004132b0 + DAT_00413330 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

