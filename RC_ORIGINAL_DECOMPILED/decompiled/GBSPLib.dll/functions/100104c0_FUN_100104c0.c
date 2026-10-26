/*
 * FUN_100104c0 at 100104c0
 * undefined FUN_100104c0(void)
 * Address ranges: 100104c0-10010551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100104c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_10313030 = FUN_10014310(DAT_1014e280 * 4);
  iVar2 = 0;
  if (0 < DAT_1014e280) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(DAT_10313030 + -4 + iVar2 * 4) = 0;
    } while (iVar2 < DAT_1014e280);
  }
  iVar2 = 0;
  if (0 < DAT_1014e2c0) {
    iVar4 = 0;
    do {
      puVar3 = (undefined4 *)FUN_10014310(8);
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar1 = *(int *)(iVar4 + 8 + DAT_1014e288);
      puVar3[1] = iVar2;
      iVar2 = iVar2 + 1;
      *puVar3 = *(undefined4 *)(DAT_10313030 + iVar1 * 4);
      *(undefined4 **)(DAT_10313030 + iVar1 * 4) = puVar3;
      iVar4 = iVar4 + 0x24;
    } while (iVar2 < DAT_1014e2c0);
  }
  return;
}

