/*
 * FUN_00448c44 at 00448c44
 * bool __register FUN_00448c44(int param_1)
 * Address ranges: 00448c44-00448c59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00448c44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00448bc4(param_1);
  return iVar1 < *(int *)(param_1 + 0x10);
}

