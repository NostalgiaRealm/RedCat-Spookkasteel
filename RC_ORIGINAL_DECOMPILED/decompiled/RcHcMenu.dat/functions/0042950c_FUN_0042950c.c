/*
 * FUN_0042950c at 0042950c
 * undefined __register FUN_0042950c(int * param_1, char param_2)
 * Address ranges: 0042950c-0042952c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042950c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x7d]) {
    *(char *)(param_1 + 0x7d) = param_2;
    FUN_00429b04(param_1);
    FUN_00435de4((int)param_1);
  }
  return;
}

