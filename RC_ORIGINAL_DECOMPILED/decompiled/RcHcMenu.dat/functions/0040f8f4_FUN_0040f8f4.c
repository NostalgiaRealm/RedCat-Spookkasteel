/*
 * FUN_0040f8f4 at 0040f8f4
 * undefined __register FUN_0040f8f4(char * param_1, byte * param_2)
 * Address ranges: 0040f8f4-0040f906
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040f8f4(char *param_1,byte *param_2)

{
  if (*param_1 == '\x01') {
    FUN_00409c44(param_2);
    return;
  }
  FUN_0040f8a8((int)param_1,(int)param_2);
  return;
}

