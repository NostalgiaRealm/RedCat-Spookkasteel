/*
 * FUN_00430ac0 at 00430ac0
 * undefined FUN_00430ac0(void)
 * Address ranges: 00430ac0-00430af6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00430ac0(undefined4 param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  float local_c [3];
  
  fVar1 = (float10)fsin((float10)param_3);
  local_c[1] = 0.0;
  local_c[0] = (float)fVar1;
  fVar1 = (float10)fcos((float10)param_3);
  local_c[2] = (float)fVar1;
  FUN_004309c0(param_1,param_2,local_c);
  return;
}

