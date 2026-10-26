/*
 * FUN_0049b988 at 0049b988
 * undefined __register FUN_0049b988(int * param_1, int param_2)
 * Address ranges: 0049b988-0049b9bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b988(int *param_1,int param_2)

{
  if (param_2 != param_1[0x21]) {
    param_1[0x21] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

