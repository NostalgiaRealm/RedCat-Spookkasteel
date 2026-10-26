/*
 * FUN_0046e89c at 0046e89c
 * undefined __register FUN_0046e89c(int * param_1, char param_2)
 * Address ranges: 0046e89c-0046e8c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e89c(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x15)) {
    *(char *)((int)param_1 + 0x15) = param_2;
    if (param_2 == '\0') {
      param_1[4] = 0;
    }
    else {
      FUN_0046e79c((int)param_1);
    }
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

