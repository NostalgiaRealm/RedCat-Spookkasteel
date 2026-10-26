/*
 * FUN_0049b9c0 at 0049b9c0
 * undefined __register FUN_0049b9c0(int * param_1, char param_2)
 * Address ranges: 0049b9c0-0049b9f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b9c0(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x22]) {
    *(char *)(param_1 + 0x22) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

