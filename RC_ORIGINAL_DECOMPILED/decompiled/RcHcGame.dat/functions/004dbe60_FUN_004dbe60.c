/*
 * FUN_004dbe60 at 004dbe60
 * undefined FUN_004dbe60(void)
 * Address ranges: 004dbe60-004dbe98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dbe60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = param_2[2];
  fVar2 = _DAT_006b92b4 + (float)param_2[1];
  *param_1 = *param_2;
  param_1[1] = fVar2;
  param_1[2] = uVar1;
  return;
}

