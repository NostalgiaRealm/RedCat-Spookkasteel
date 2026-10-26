/*
 * FUN_0049900c at 0049900c
 * undefined __register FUN_0049900c(int param_1, int * param_2)
 * Address ranges: 0049900c-00499075
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049900c(int param_1,int *param_2)

{
  int *piVar1;
  int local_18;
  int local_10;
  
  if ((*param_2 != 0) && (local_18 = FUN_0041300c(*(int *)(param_1 + 4)), -1 < local_18 + -1)) {
    local_10 = 0;
    do {
      piVar1 = (int *)FUN_00413014(*(int *)(param_1 + 4),local_10);
      if (*param_2 == piVar1[4]) {
        *param_2 = 0;
        FUN_00498dd8(piVar1);
        return;
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

