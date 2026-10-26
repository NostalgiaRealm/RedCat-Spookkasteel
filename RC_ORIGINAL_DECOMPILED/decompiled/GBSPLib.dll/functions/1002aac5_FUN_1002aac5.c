/*
 * FUN_1002aac5 at 1002aac5
 * undefined FUN_1002aac5(void)
 * Address ranges: 1002aac5-1002ab18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1002aac5(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_1003f760 == 0) {
    fVar2 = (float10)FUN_1002b07b(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_1002b3dc();
  *puVar1 = 0x21;
  FUN_1002b2f0();
  return (float10)param_2;
}

