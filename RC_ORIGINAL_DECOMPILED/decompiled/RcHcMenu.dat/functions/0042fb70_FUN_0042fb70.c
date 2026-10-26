/*
 * FUN_0042fb70 at 0042fb70
 * undefined __register FUN_0042fb70(undefined4 * param_1, int * param_2)
 * Address ranges: 0042fb70-0042fba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042fb70(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040da1c(&DAT_0042fbb0,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403e04(param_2,param_1);
  }
  else {
    FUN_00404238((int)param_1,(int)(pCVar1 + 1),0x7fffffff,param_2);
  }
  return;
}

