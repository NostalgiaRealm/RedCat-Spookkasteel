/*
 * FUN_005117e0 at 005117e0
 * undefined FUN_005117e0(void)
 * Address ranges: 005117e0-0051180b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_005117e0(undefined4 param_1,float param_2)

{
  int iVar1;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280(param_1);
  }
  iVar1 = FUN_004b26a0();
  return (float10)iVar1 * (float10)param_2 * (float10)0.0015625;
}

