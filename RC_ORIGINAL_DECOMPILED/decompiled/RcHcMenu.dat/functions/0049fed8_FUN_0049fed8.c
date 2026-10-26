/*
 * FUN_0049fed8 at 0049fed8
 * undefined __register FUN_0049fed8(int * param_1, char param_2)
 * Address ranges: 0049fed8-0049ff06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049fed8(int *param_1,char param_2)

{
  if ((char)param_1[0x15] != param_2) {
    *(char *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

