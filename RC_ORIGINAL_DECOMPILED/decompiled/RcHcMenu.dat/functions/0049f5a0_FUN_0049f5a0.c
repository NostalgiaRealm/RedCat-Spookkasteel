/*
 * FUN_0049f5a0 at 0049f5a0
 * undefined __register FUN_0049f5a0(int param_1, int param_2)
 * Address ranges: 0049f5a0-0049f60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f5a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_18;
  int local_10;
  
  iVar1 = FUN_0041300c(*(int *)(param_1 + 4));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_10 = 0;
    do {
      piVar3 = (int *)FUN_00413014(*(int *)(param_1 + 4),local_10);
      piVar3 = (int *)FUN_00403224(piVar3,(int)&PTR_FUN_0049eb7c);
      if (piVar3[3] == param_2) {
        FUN_0049f664(piVar3);
        return;
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

