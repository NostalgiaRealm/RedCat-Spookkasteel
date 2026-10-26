/*
 * FUN_00403434 at 00403434
 * int * __register FUN_00403434(int * param_1, char param_2)
 * Address ranges: 00403434-00403442
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00403434(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}

