/*
 * FUN_004123e0 at 004123e0
 * int __register FUN_004123e0(int param_1, int param_2)
 * Address ranges: 004123e0-004123fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004123e0(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0;
      (iVar1 < *(int *)(param_1 + 8) && (param_2 != *(int *)(*(int *)(param_1 + 4) + iVar1 * 4)));
      iVar1 = iVar1 + 1) {
  }
  if (iVar1 == *(int *)(param_1 + 8)) {
    iVar1 = -1;
  }
  return iVar1;
}

