/*
 * FUN_005d57f0 at 005d57f0
 * undefined FUN_005d57f0(void)
 * Address ranges: 005d57f0-005d586a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d57f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x134);
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x110) + 0x38);
  if (0 < iVar6) {
    piVar5 = (int *)(*(int *)(param_1 + 0x11c) + 0x20);
    do {
      if (((*(byte *)(piVar5 + -8) & 0x10) != 0) && (iVar4 = 0, 0 < *piVar5)) {
        do {
          iVar3 = *(int *)(iVar1 + (piVar5[-1] + iVar4) * 4);
          iVar4 = iVar4 + 1;
          *(uint *)(iVar2 + 0x84 + iVar3 * 0x88) = *(uint *)(iVar2 + 0x84 + iVar3 * 0x88) | 8;
        } while (iVar4 < *piVar5);
      }
      piVar5 = piVar5 + 0xf;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return 1;
  }
  return 1;
}

