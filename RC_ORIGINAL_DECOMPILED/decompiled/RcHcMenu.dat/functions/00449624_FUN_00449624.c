/*
 * FUN_00449624 at 00449624
 * undefined __register FUN_00449624(int param_1, char param_2)
 * Address ranges: 00449624-0044965d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449624(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    if (param_2 == '\0') {
      FUN_0044917c(*(int *)(param_1 + 0x1f0),0);
      FUN_0044917c(*(int *)(param_1 + 500),0);
    }
    else {
      FUN_00449600(param_1);
    }
  }
  return;
}

