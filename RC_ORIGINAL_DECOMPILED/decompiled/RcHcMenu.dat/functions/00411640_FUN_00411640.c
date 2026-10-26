/*
 * FUN_00411640 at 00411640
 * undefined __register FUN_00411640(int param_1, int param_2, int param_3, int * param_4, int param_5)
 * Address ranges: 00411640-0041165b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411640(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3 + param_1;
  param_4[3] = param_2 + param_5;
  return;
}

