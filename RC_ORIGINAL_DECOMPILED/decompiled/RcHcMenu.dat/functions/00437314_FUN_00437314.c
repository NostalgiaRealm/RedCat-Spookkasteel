/*
 * FUN_00437314 at 00437314
 * int __register FUN_00437314(int param_1)
 * Address ranges: 00437314-0043734d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00437314(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00437280(param_1);
  if ((0 < iVar1) && (iVar3 = iVar1 + -1, -1 < iVar3)) {
    do {
      iVar2 = FUN_00412384(*(undefined4 **)(param_1 + 0x140),iVar3);
      if (*(char *)(iVar2 + 0x47) == '\0') {
        iVar1 = iVar1 + -1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return iVar1;
}

