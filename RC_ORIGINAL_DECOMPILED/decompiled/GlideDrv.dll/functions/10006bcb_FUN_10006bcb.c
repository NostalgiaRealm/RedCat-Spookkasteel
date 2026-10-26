/*
 * FUN_10006bcb at 10006bcb
 * undefined __cdecl FUN_10006bcb(uint param_1, int * param_2, int * param_3)
 * Address ranges: 10006bcb-10006bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10006bcb(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1000476e(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

