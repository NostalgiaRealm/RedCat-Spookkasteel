/*
 * FUN_004341b0 at 004341b0
 * undefined FUN_004341b0(void)
 * Address ranges: 004341b0-00434224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004341b0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar2,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  piVar3 = (int *)FUN_00492360();
  cVar1 = (**(code **)(*piVar3 + 0xc))();
  if (cVar1 == '\0') {
    fVar4 = (float10)FUN_00409e30(param_2);
    if (fVar4 * (float10)1000.0 - (float10)*(float *)(param_1 + 0x368) < (float10)3700.0) {
      return 1;
    }
    return 0;
  }
  return 1;
}

