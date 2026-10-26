/*
 * FUN_004098e4 at 004098e4
 * int __register FUN_004098e4(PCNZCH param_1, PCNZCH param_2)
 * Address ranges: 004098e4-00409901
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004098e4(PCNZCH param_1,PCNZCH param_2)

{
  int iVar1;
  
  iVar1 = CompareStringA(0x400,1,param_1,-1,param_2,-1);
  return iVar1 + -2;
}

