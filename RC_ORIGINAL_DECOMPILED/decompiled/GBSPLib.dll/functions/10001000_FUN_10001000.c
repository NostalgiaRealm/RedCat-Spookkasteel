/*
 * FUN_10001000 at 10001000
 * undefined FUN_10001000(void)
 * Address ranges: 10001000-10001031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10001000(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = param_1 * 0x14 + 0x30;
  puVar1 = (undefined4 *)FUN_10014310(uVar2);
  puVar4 = puVar1;
  for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return puVar1;
}

