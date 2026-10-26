/*
 * FUN_00595ec0 at 00595ec0
 * undefined FUN_00595ec0(void)
 * Address ranges: 00595ec0-00595f0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00595ec0(float param_1,float param_2)

{
  unkbyte10 Var1;
  float10 fVar2;
  float10 fVar3;
  undefined1 local_c [12];
  
  FUN_00596120(param_1);
  Var1 = FUN_005b1630(param_1 + param_2);
  fVar2 = (float10)fsin(Var1);
  fVar3 = (float10)fcos(Var1);
  FUN_005b2e20((float)fVar3,0,(float)-fVar2);
  FUN_00595d70(local_c);
  return;
}

