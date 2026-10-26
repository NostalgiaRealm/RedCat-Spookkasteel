/*
 * FUN_004a3804 at 004a3804
 * undefined __register FUN_004a3804(int * param_1, int param_2)
 * Address ranges: 004a3804-004a3835
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3804(int *param_1,int param_2)

{
  if (param_1[0x83] != param_2) {
    param_1[0x83] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

