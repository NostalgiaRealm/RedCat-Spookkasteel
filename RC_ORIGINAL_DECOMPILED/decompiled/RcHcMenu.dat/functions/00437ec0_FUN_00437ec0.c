/*
 * FUN_00437ec0 at 00437ec0
 * undefined __register FUN_00437ec0(int * param_1)
 * Address ranges: 00437ec0-00437eec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437ec0(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x47) == '\0') && (param_1[9] != 0)) {
    FUN_0043555c(param_1,'\0');
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    FUN_00435f34(param_1);
  }
  return;
}

