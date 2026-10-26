/*
 * FUN_005a1fe0 at 005a1fe0
 * undefined FUN_005a1fe0(void)
 * Address ranges: 005a1fe0-005a200b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a1fe0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_005a1da0();
  if (*(int *)(iVar1 + 100) == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar3 = FUN_0060af10(puVar2);
    *(undefined4 *)(iVar1 + 100) = uVar3;
  }
  return;
}

