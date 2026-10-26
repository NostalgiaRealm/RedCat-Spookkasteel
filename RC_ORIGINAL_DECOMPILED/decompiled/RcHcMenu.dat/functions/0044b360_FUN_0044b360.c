/*
 * FUN_0044b360 at 0044b360
 * int __register FUN_0044b360(int param_1)
 * Address ranges: 0044b360-0044b3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044b360(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    iVar1 = FUN_0044f140(DAT_005737d8);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0044f12c(DAT_005737d8,iVar3);
        if (*(char *)(iVar2 + 0x217) == '\x01') {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}

