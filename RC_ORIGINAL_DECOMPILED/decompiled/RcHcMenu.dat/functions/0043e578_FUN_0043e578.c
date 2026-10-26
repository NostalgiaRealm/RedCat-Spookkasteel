/*
 * FUN_0043e578 at 0043e578
 * int __register FUN_0043e578(int param_1, int param_2)
 * Address ranges: 0043e578-0043e587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043e578(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    return param_2;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  return iVar1;
}

