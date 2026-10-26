/*
 * FUN_1000fe00 at 1000fe00
 * undefined FUN_1000fe00(void)
 * Address ranges: 1000fe00-1000fe33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000fe00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10014310(0x90);
  if (puVar1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_AllocPatch__Not_enough_memory__10039608);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

