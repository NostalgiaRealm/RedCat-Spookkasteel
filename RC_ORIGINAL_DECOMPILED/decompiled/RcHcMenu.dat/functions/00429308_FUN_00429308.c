/*
 * FUN_00429308 at 00429308
 * undefined __register FUN_00429308(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00429308-0042932e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429308(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12f)) {
    *(char *)((int)param_1 + 0x12f) = (char)param_2;
    FUN_00403270(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

