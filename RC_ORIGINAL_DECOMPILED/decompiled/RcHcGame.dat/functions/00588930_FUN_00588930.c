/*
 * FUN_00588930 at 00588930
 * undefined FUN_00588930(void)
 * Address ranges: 00588930-0058896b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00588930(int param_1,float *param_2,int param_3)

{
  float fVar1;
  
  fVar1 = *param_2;
  *param_2 = fVar1 * *(float *)(param_1 + 0x1798 + param_3 * 4) -
             param_2[2] * *(float *)(param_1 + 0x1d3c + param_3 * 4);
  param_2[2] = fVar1 * *(float *)(param_1 + 0x1d3c + param_3 * 4) +
               param_2[2] * *(float *)(param_1 + 0x1798 + param_3 * 4);
  return;
}

