/*
 * FUN_004ef3a0 at 004ef3a0
 * undefined __register FUN_004ef3a0(int * param_1, int * param_2)
 * Address ranges: 004ef3a0-004ef3fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ef3a0(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  if ((char)param_1[0x7e] == '\x01') {
    if ((*PTR_DAT_005722c4 == '\0') || ((char)param_1[0x4e] == '\0')) {
      param_2[1] = param_2[1] | 0x800000;
    }
    else {
      param_2[1] = param_2[1] & 0xff7fffff;
      param_2[2] = param_2[2] | 0x200;
    }
  }
  return;
}

