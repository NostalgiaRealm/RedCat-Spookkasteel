/*
 * FUN_10019ebf at 10019ebf
 * undefined FUN_10019ebf(void)
 * Address ranges: 10019ebf-10019f14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019ebf(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100239c0 == param_1) {
    PTR_LOOP_100239c0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100219a0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1020fd70,0,param_1);
    return;
  }
  DAT_100219b0 = 0xffffffff;
  return;
}

