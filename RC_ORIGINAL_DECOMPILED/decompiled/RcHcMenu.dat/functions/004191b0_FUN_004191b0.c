/*
 * FUN_004191b0 at 004191b0
 * undefined __register FUN_004191b0(int param_1)
 * Address ranges: 004191b0-004191e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004191b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x10),iVar3);
        FUN_004191b0(iVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

