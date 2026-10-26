/*
 * FUN_100027f0 at 100027f0
 * undefined FUN_100027f0(void)
 * Address ranges: 100027f0-10002823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100027f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10014310(0x88);
  if (puVar1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_AllocNode__Out_of_memory__100364c0);
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

