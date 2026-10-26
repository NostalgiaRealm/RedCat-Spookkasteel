/*
 * FUN_004098a8 at 004098a8
 * bool __register FUN_004098a8(undefined * param_1, undefined * param_2)
 * Address ranges: 004098a8-004098e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004098a8(undefined *param_1,undefined *param_2)

{
  int iVar1;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  iVar1 = FUN_00404030((int)param_2);
  lpString2 = FUN_004041f4(param_2);
  cchCount1 = FUN_00404030((int)param_1);
  lpString1 = FUN_004041f4(param_1);
  iVar1 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,iVar1);
  return iVar1 == 2;
}

