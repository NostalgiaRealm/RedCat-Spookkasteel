/*
 * FUN_0044b864 at 0044b864
 * int __register FUN_0044b864(int param_1)
 * Address ranges: 0044b864-0044b876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044b864(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_005737d8 + 0x34);
  }
  return iVar1;
}

