/*
 * FUN_005cc1f0 at 005cc1f0
 * undefined FUN_005cc1f0(void)
 * Address ranges: 005cc1f0-005cc225
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cc1f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xbc0)) {
    puVar2 = (undefined4 *)(param_1 + 0x3c4);
    do {
      FUN_005cc630(*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0xbc0));
  }
  return;
}

