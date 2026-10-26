/*
 * FUN_004f8334 at 004f8334
 * undefined __register FUN_004f8334(int * param_1, uint param_2, int param_3)
 * Address ranges: 004f8334-004f8374
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8334(int *param_1,uint param_2,int param_3)

{
  if ((-1 < (int)param_2) && ((int)param_2 < 0x65)) {
    if (100 < param_2) {
      param_2 = thunk_FUN_00402874(param_2);
    }
    param_1[param_2 + 0x90] = param_3;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

