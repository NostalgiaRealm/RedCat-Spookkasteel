/*
 * FUN_100142d0 at 100142d0
 * undefined FUN_100142d0(void)
 * Address ranges: 100142d0-10014305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100142d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_10014310(param_1 + 3U & 0xfffffffc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = param_1 + 3U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

