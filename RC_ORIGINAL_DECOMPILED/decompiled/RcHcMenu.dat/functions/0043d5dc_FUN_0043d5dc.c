/*
 * FUN_0043d5dc at 0043d5dc
 * undefined __register FUN_0043d5dc(int * param_1, int * param_2, uint param_3)
 * Address ranges: 0043d5dc-0043d60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d5dc(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0041936c(param_1,param_2,param_3);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0043d334);
  if ((char)uVar2 != '\0') {
    FUN_0043d684((int)param_1,(int)piVar1);
  }
  return;
}

