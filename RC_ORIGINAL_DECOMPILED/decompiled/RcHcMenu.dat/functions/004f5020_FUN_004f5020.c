/*
 * FUN_004f5020 at 004f5020
 * undefined __register FUN_004f5020(int * param_1, int param_2, char param_3)
 * Address ranges: 004f5020-004f504d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5020(int *param_1,int param_2,char param_3)

{
  FUN_00431ce8(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x7f])) {
    FUN_004f5050((int)param_1,0);
  }
  return;
}

