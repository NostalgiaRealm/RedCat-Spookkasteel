/*
 * FUN_005c5810 at 005c5810
 * undefined FUN_005c5810(void)
 * Address ranges: 005c5810-005c588c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_005c5810(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  if (param_1 != 0) {
    if (param_2 < param_3) {
      fVar1 = (float10)FUN_0060b0da();
      return fVar1 + (float10)param_3 + (float10)param_4;
    }
    if (param_4 <= param_2) {
      if (param_4 < param_3 + 1e-05) {
        return (float10)param_3;
      }
      fVar1 = (float10)FUN_0060b0da();
      return fVar1 + (float10)param_3;
    }
  }
  return (float10)param_2;
}

