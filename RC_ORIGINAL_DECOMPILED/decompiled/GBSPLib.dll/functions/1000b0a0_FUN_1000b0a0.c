/*
 * FUN_1000b0a0 at 1000b0a0
 * undefined FUN_1000b0a0(void)
 * Address ranges: 1000b0a0-1000b0dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b0a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = &DAT_10260e94;
  do {
    if (*piVar2 != 0) {
      FUN_1000a850(*piVar2);
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x10265cb4);
  DAT_10265cdc = 0;
  puVar3 = &DAT_102487d0;
  for (iVar1 = 25000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

