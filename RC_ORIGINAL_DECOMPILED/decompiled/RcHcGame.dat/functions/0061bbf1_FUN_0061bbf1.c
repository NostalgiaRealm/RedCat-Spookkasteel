/*
 * FUN_0061bbf1 at 0061bbf1
 * undefined FUN_0061bbf1(void)
 * Address ranges: 0061bbf1-0061bc33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0061bbf1(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_006b3a58;
  if (DAT_006b3a58 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_006b3a58 + DAT_006b3ad8 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_006b3a58 + DAT_006b3ad8 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

