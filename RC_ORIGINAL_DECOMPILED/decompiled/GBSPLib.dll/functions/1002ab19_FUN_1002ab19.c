/*
 * FUN_1002ab19 at 1002ab19
 * undefined FUN_1002ab19(void)
 * Address ranges: 1002ab19-1002abb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1002ab19(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_1002ae64(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_1002abb1();
  }
  iVar1 = FUN_1002b150(param_1);
  if ((DAT_1003f760 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_1002b07b(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_1002b103(iVar1);
  FUN_1002b2f0();
  return (float10)param_4;
}

