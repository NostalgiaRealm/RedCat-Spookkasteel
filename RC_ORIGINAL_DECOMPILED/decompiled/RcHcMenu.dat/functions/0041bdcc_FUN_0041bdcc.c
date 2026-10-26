/*
 * FUN_0041bdcc at 0041bdcc
 * int __register FUN_0041bdcc(int param_1)
 * Address ranges: 0041bdcc-0041bde5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041bdcc(int param_1)

{
  int nNumber;
  int iVar1;
  int nNumerator;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  nNumerator = 0x48;
  nNumber = FUN_0041bd28(param_1);
  iVar1 = MulDiv(nNumber,nNumerator,iVar1);
  return -iVar1;
}

