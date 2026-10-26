/*
 * FUN_00511060 at 00511060
 * undefined __register FUN_00511060(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00511060-00511091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00511060(int *param_1,char param_2,undefined4 param_3)

{
  if (*(char *)((int)param_1 + 0x281) != param_2) {
    *(char *)((int)param_1 + 0x281) = param_2;
    FUN_005112f0(param_1,param_1,param_3);
  }
  return;
}

