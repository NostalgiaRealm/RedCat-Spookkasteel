/*
 * FUN_0043a4b0 at 0043a4b0
 * int __register FUN_0043a4b0(int param_1)
 * Address ranges: 0043a4b0-0043a4c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043a4b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

