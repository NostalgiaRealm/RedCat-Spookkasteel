/*
 * FUN_005b0c40 at 005b0c40
 * undefined FUN_005b0c40(void)
 * Address ranges: 005b0c40-005b0c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b0c40(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  iVar2 = FUN_0061f646(puVar1,0);
  return iVar2 != -1;
}

