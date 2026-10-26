/*
 * FUN_005d3f30 at 005d3f30
 * undefined FUN_005d3f30(void)
 * Address ranges: 005d3f30-005d3f9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = param_4;
  piVar2 = (int *)(DAT_006cefd0 + 0x3e4);
  *param_5 = *param_4;
  param_5[1] = param_4[1];
  param_5[2] = param_4[2];
  param_5[3] = param_4[3];
  param_5[4] = param_4[4];
  param_4 = (undefined4 *)0x20;
  do {
    if (*piVar2 != 0) {
      FUN_005d3e50(param_1,piVar2,param_2,param_3,puVar1,param_5);
    }
    piVar2 = piVar2 + 0xd;
    param_4 = (undefined4 *)((int)param_4 + -1);
  } while (param_4 != (undefined4 *)0x0);
  return;
}

