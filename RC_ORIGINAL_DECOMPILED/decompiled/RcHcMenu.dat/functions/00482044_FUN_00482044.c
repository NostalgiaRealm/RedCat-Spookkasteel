/*
 * FUN_00482044 at 00482044
 * undefined __register FUN_00482044(int * param_1, uint * param_2)
 * Address ranges: 00482044-0048205c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482044(int *param_1,uint *param_2)

{
  FUN_00419464(param_1,param_2);
  if (*(char *)((int)param_1 + 0x43) != '\0') {
    FUN_0048259c((int)param_1);
  }
  return;
}

