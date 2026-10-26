/*
 * FUN_00596120 at 00596120
 * undefined FUN_00596120(void)
 * Address ranges: 00596120-00596146
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596120(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_2);
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(float *)(param_1 + 0x2f8) = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_2);
  *(float *)(param_1 + 0x300) = (float)-fVar1;
  return;
}

