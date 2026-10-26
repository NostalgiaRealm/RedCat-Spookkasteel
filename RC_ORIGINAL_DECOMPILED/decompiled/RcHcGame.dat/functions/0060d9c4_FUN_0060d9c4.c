/*
 * FUN_0060d9c4 at 0060d9c4
 * undefined FUN_0060d9c4(void)
 * Address ranges: 0060d9c4-0060da08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0060d9c4(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_006b3a58;
  if (DAT_006b3a5c != param_1) {
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 3;
      if (&DAT_006b3a58 + DAT_006b3ad8 * 3 <= puVar2) break;
      piVar1 = puVar3 + 4;
      puVar3 = puVar2;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_006b3a58 + DAT_006b3ad8 * 3 <= puVar2) || (puVar2[1] != param_1)) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

