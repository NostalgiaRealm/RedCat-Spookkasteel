/*
 * FUN_0046e584 at 0046e584
 * undefined __register FUN_0046e584(int param_1, char param_2)
 * Address ranges: 0046e584-0046e5a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e584(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) != param_2) {
    *(char *)(param_1 + 0x20) = param_2;
    FUN_00412c80(param_1,'\0');
  }
  return;
}

