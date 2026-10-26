/*
 * FUN_004438f4 at 004438f4
 * bool __register FUN_004438f4(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004438f4-00443921
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004438f4(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040da1c(param_1,*(undefined **)(param_4 + -4));
  if (pCVar1 != (PCNZCH)0x0) {
    FUN_00404278((int *)(param_4 + -4),(int)pCVar1,1);
  }
  return pCVar1 != (PCNZCH)0x0;
}

