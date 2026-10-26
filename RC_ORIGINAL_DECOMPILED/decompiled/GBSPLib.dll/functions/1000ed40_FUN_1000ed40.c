/*
 * FUN_1000ed40 at 1000ed40
 * undefined FUN_1000ed40(void)
 * Address ranges: 1000ed40-1000ed70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000ed40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10014310(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_AllocPortal__Out_of_memory__10039070);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

