/*
 * FUN_00521894 at 00521894
 * undefined __register FUN_00521894(int param_1, char param_2)
 * Address ranges: 00521894-005218f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521894(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x238) != param_2) {
    *(char *)(param_1 + 0x238) = param_2;
    FUN_00524fb8(*(int **)(param_1 + 0x274),*(int *)(*(int *)(param_1 + 0x274) + 0x218));
    if (*(char *)(param_1 + 0x238) == '\0') {
      FUN_00521710(param_1,'\0');
    }
  }
  return;
}

