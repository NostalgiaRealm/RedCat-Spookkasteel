/*
 * FUN_0048458c at 0048458c
 * undefined __register FUN_0048458c(int param_1, int param_2)
 * Address ranges: 0048458c-004845c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048458c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x1b5) != '\0') && (iVar1 = *(int *)(param_1 + 0x68), -1 < iVar1 + -1)) {
    iVar2 = 0;
    do {
      FUN_00403db0((int *)((uint)*(ushort *)(param_1 + 0x1ee) + param_2 + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

