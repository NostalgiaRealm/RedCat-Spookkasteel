/*
 * FUN_0049fea8 at 0049fea8
 * undefined __register FUN_0049fea8(int * param_1, int param_2)
 * Address ranges: 0049fea8-0049fed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049fea8(int *param_1,int param_2)

{
  if (param_1[0x14] != param_2) {
    param_1[0x14] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

