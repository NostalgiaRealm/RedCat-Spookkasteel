/*
 * FUN_0041387c at 0041387c
 * undefined __register FUN_0041387c(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0041387c-004138b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041387c(int *param_1,undefined4 param_2,int *param_3)

{
  PCNZCH pCVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  pCVar1 = FUN_0040da1c(&DAT_004138c4,(undefined *)*param_3);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00404364(param_3,0);
  }
  else {
    FUN_00404364(param_3,(uint)(pCVar1 + -1));
  }
  return;
}

