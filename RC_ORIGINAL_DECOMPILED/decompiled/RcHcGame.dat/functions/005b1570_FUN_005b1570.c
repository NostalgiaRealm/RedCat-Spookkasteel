/*
 * FUN_005b1570 at 005b1570
 * undefined FUN_005b1570(void)
 * Address ranges: 005b1570-005b15e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1570(int param_1,undefined4 *param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,float *param_6)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  fVar1 = (float10)FUN_005b2f20();
  fVar2 = (float10)FUN_005b1470(&local_c,param_1 + 0x1c,&local_c,param_3);
  FUN_005b2fa0((float)fVar1 * param_4);
  *param_6 = ABS((float)fVar2) * (float)fVar1;
  return;
}

