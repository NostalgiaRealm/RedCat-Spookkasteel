/*
 * FUN_005539e0 at 005539e0
 * undefined FUN_005539e0(void)
 * Address ranges: 005539e0-00553a14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005539e0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = FUN_005586f0();
  iVar3 = *(int *)(iVar1 + 100);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 100) = iVar3;
  }
  return iVar3 != 0;
}

