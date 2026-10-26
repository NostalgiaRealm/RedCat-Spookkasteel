/*
 * FUN_00436720 at 00436720
 * undefined FUN_00436720(void)
 * Address ranges: 00436720-004368ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00436720(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480(param_1);
  }
  FUN_0060a6f2(iVar2,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  piVar3 = (int *)FUN_00492360();
  cVar1 = (**(code **)(*piVar3 + 0xc))();
  if (cVar1 != '\0') {
    if (DAT_006b585c == '\0') {
      DAT_006b585c = 1;
      DAT_006b5288 = param_2;
      return (float10)_DAT_006b5860;
    }
    fVar4 = (float10)FUN_00409e30(DAT_006b5288);
    fVar5 = (float)(fVar4 * (float10)1000.0);
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar4 = fVar4 * (float10)1000.0 - (float10)fVar5;
    _DAT_006b528c = (float)fVar4;
    if ((float10)0.0 < fVar4) {
      if (1500.0 <= _DAT_006b528c) goto LAB_004367ea;
      _DAT_006b5860 = (_DAT_006b528c / 1500.0) * 100.0;
    }
    if (1500.0 <= _DAT_006b528c) {
LAB_004367ea:
      _DAT_006b5860 = (float)(float10)100.0;
      return (float10)100.0;
    }
LAB_004368c1:
    return (float10)_DAT_006b5860;
  }
  if (DAT_006b585c != '\x01') {
    _DAT_006b528c = 0.0;
    DAT_006b5288 = param_2;
    goto LAB_004368c1;
  }
  fVar4 = (float10)FUN_00409e30(DAT_006b5288);
  fVar5 = (float)(fVar4 * (float10)1000.0);
  fVar4 = (float10)FUN_00409e30(param_2);
  fVar4 = fVar4 * (float10)1000.0 - (float10)fVar5;
  if (fVar4 <= (float10)0.0) {
LAB_00436877:
    if (fVar4 <= (float10)1500.0) goto LAB_00436892;
  }
  else if (fVar4 <= (float10)1500.0) {
    _DAT_006b5860 = (float)((fVar4 / (float10)1500.0) * (float10)100.0);
    goto LAB_00436877;
  }
  _DAT_006b5860 = 100.0;
LAB_00436892:
  _DAT_006b528c = 0.0;
  DAT_006b585c = 0;
  return (float10)_DAT_006b5860;
}

