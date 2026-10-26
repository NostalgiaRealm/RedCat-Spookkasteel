/*
 * FUN_10005bfc at 10005bfc
 * undefined __cdecl FUN_10005bfc(undefined * * param_1)
 * Address ranges: 10005bfc-10005c51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005bfc(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10010bb8 == param_1) {
    PTR_LOOP_10010bb8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000eb98) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_101f5ab0,0,param_1);
    return;
  }
  DAT_1000eba8 = 0xffffffff;
  return;
}

