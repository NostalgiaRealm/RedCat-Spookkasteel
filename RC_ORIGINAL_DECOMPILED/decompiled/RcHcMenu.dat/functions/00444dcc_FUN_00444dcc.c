/*
 * FUN_00444dcc at 00444dcc
 * undefined __register FUN_00444dcc(int * param_1, char param_2)
 * Address ranges: 00444dcc-00444ddd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444dcc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[9]) {
    *(char *)(param_1 + 9) = param_2;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_004446cc(param_1);
  }
  return;
}

