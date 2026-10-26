/*
 * FUN_1000a810 at 1000a810
 * undefined FUN_1000a810(void)
 * Address ranges: 1000a810-1000a840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000a810(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10014310(0x4c);
  if (puVar1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_AllocDirectLight__Could_not_crea_1003824c);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

