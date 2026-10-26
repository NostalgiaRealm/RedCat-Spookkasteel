/*
 * FUN_00443044 at 00443044
 * undefined __register FUN_00443044(int * param_1, int param_2)
 * Address ranges: 00443044-00443053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443044(int *param_1,int param_2)

{
  if (param_2 != param_1[0xd]) {
    param_1[0xd] = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}

