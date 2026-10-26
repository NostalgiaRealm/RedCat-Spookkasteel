/*
 * FUN_004034bc at 004034bc
 * int __register FUN_004034bc(int param_1, undefined4 param_2, char * param_3)
 * Address ranges: 004034bc-004034d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004034bc(int param_1,undefined4 param_2,char *param_3)

{
  if (((param_3 != (char *)0x0) && (param_1 = *(int *)(param_3 + 1), *param_3 != -0x17)) &&
     (*param_3 == -0x15)) {
    param_1 = (int)(char)param_1;
  }
  return param_1;
}

