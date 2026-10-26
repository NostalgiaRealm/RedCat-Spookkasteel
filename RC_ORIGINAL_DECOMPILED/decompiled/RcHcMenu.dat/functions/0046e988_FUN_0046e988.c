/*
 * FUN_0046e988 at 0046e988
 * undefined __register FUN_0046e988(int param_1, int param_2)
 * Address ranges: 0046e988-0046e9b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e988(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 != *(int *)(param_1 + 0xc)) &&
     (*(int *)(param_1 + 0xc) = param_2, *(char *)(param_1 + 0x15) != '\0')) {
    FUN_0046e79c(param_1);
    piVar1 = (int *)FUN_0046e810(param_1);
    FUN_00472c90(piVar1);
    FUN_0046e79c(param_1);
  }
  return;
}

