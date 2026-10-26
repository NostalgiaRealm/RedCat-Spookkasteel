/*
 * FUN_00444938 at 00444938
 * undefined __register FUN_00444938(int * param_1, int param_2)
 * Address ranges: 00444938-0044496f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444938(int *param_1,int param_2)

{
  param_1[0xb] = param_2;
  FUN_00444828(param_1);
  if ((PTR_DAT_0057261c[9] != '\0') && (param_2 != 0)) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_004448bc(param_1);
    }
    else {
      FUN_00444df0(param_1);
    }
  }
  return;
}

