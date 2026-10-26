/*
 * FUN_00511104 at 00511104
 * undefined __register FUN_00511104(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00511104-00511135
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00511104(int *param_1,char param_2,undefined4 param_3)

{
  if (param_2 != (char)param_1[0xa2]) {
    *(char *)(param_1 + 0xa2) = param_2;
    FUN_005112f0(param_1,param_1,param_3);
  }
  return;
}

