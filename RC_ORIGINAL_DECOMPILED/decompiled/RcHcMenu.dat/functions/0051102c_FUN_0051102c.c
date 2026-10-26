/*
 * FUN_0051102c at 0051102c
 * undefined __register FUN_0051102c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0051102c-0051105d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051102c(int *param_1,char param_2,undefined4 param_3)

{
  if ((char)param_1[0xa0] != param_2) {
    *(char *)(param_1 + 0xa0) = param_2;
    FUN_005112f0(param_1,param_1,param_3);
  }
  return;
}

