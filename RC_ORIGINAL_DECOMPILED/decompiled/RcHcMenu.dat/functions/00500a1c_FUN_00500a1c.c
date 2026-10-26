/*
 * FUN_00500a1c at 00500a1c
 * undefined __register FUN_00500a1c(int * param_1, short * param_2, byte param_3)
 * Address ranges: 00500a1c-00500a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500a1c(int *param_1,short *param_2,byte param_3)

{
  if ((*(char *)((int)param_1 + 0x1f6) == '\0') &&
     (((*param_2 == 0x73 && (param_3 == 0)) || ((*param_2 == 0x28 && ((param_3 & 2) != 0)))))) {
    (**(code **)(*param_1 + 0xd8))();
  }
  return;
}

