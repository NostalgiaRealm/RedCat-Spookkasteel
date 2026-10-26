/*
 * FUN_00480798 at 00480798
 * undefined __register FUN_00480798(undefined4 param_1, int * param_2)
 * Address ranges: 00480798-004807c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480798(undefined4 param_1,int *param_2)

{
  if (param_2[0x1b] != 0) {
    param_2[0x1b] = param_2[0x1b] + -1;
  }
  if ((param_2[0x1b] == 0) && (*(char *)((int)param_2 + 0x61) == '\0')) {
    if (*(char *)((int)param_2 + 0x62) == '\0') {
      FUN_00467184(param_2);
    }
    else if ((*(byte *)(param_2 + 8) & 8) == 0) {
      FUN_00403094(param_2);
    }
  }
  return;
}

