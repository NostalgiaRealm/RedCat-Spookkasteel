/*
 * FUN_0042fb2c at 0042fb2c
 * undefined __register FUN_0042fb2c(undefined4 * param_1, int * param_2)
 * Address ranges: 0042fb2c-0042fb63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042fb2c(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040da1c(&DAT_0042fb6c,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403e04(param_2,param_1);
  }
  else {
    FUN_00404238((int)param_1,1,(uint)(pCVar1 + -1),param_2);
  }
  return;
}

