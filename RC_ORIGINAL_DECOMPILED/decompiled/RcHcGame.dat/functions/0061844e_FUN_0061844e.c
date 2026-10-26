/*
 * FUN_0061844e at 0061844e
 * undefined FUN_0061844e(void)
 * Address ranges: 0061844e-006184a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0061844e(undefined4 param_1,double param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_006b3ca8 == 0) {
    fVar1 = (float10)FUN_00618a03(1,param_1,param_2,0,param_2,param_3);
    return fVar1;
  }
  DAT_0070ff98 = 0x21;
  FUN_00618c76();
  return (float10)param_2;
}

