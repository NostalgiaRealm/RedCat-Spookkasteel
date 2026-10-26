/*
 * FUN_00409904 at 00409904
 * int __register FUN_00409904(PCNZCH param_1, PCNZCH param_2, int param_3)
 * Address ranges: 00409904-00409923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00409904(PCNZCH param_1,PCNZCH param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CompareStringA(0x400,1,param_1,param_3,param_2,param_3);
  return iVar1 + -2;
}

