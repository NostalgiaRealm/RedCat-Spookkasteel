/*
 * FUN_00485fc8 at 00485fc8
 * undefined __register FUN_00485fc8(int * param_1, int * param_2, int param_3)
 * Address ranges: 00485fc8-0048603c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485fc8(int *param_1,int *param_2,int param_3)

{
  if ((char)param_1[0x26] == '\0') {
    if (*param_2 != 0) {
      thunk_FUN_0047945f(param_1[0x5a]);
    }
    *param_2 = param_3;
  }
  else {
    FUN_00473148((int)param_1);
    (**(code **)(*param_1 + 600))();
    thunk_FUN_00479cac(param_1[0x5a]);
    if (*param_2 != 0) {
      thunk_FUN_0047945f(param_1[0x5a]);
    }
    *param_2 = param_3;
    if (*param_2 != 0) {
      thunk_FUN_00479459(param_1[0x5a]);
    }
  }
  return;
}

