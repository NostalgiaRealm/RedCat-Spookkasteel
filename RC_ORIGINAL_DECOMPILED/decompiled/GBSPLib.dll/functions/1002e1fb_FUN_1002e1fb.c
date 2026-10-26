/*
 * FUN_1002e1fb at 1002e1fb
 * undefined FUN_1002e1fb(void)
 * Address ranges: 1002e1fb-1002e250
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e1fb(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1003f370 == param_1) {
    PTR_LOOP_1003f370 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1003d350) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1052a9b4,0,param_1);
    return;
  }
  DAT_1003d360 = 0xffffffff;
  return;
}

