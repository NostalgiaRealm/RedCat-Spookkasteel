/*
 * FUN_00456688 at 00456688
 * undefined __register FUN_00456688(int * param_1, undefined4 param_2, short * param_3, undefined1 param_4)
 * Address ranges: 00456688-004566c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00456688(int *param_1,undefined4 param_2,short *param_3,undefined1 param_4)

{
  if (*param_3 == 0x1b) {
    FUN_00403270(param_1,param_2,param_3);
  }
  else if (*(short *)((int)param_1 + 0x15a) != 0) {
    (*(code *)param_1[0x56])(param_1[0x57],param_2,param_3,param_4);
  }
  return;
}

