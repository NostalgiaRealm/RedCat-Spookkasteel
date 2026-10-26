/*
 * FUN_00442e7c at 00442e7c
 * undefined __register FUN_00442e7c(int param_1)
 * Address ranges: 00442e7c-00442ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00442e7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_00442fec(*(int *)(param_1 + 0x58));
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_00442ffc(*(int *)(param_1 + 0x58),iVar3);
        if (((param_1 != iVar2) && (*(char *)(iVar2 + 0x31) != '\0')) &&
           (*(char *)(iVar2 + 0x33) == *(char *)(param_1 + 0x33))) {
          FUN_00442ec4(iVar2,0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

