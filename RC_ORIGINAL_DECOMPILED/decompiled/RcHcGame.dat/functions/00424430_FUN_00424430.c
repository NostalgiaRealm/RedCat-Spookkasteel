/*
 * FUN_00424430 at 00424430
 * undefined FUN_00424430(void)
 * Address ranges: 00424430-00424507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 28 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 28 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00424430(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (((float)(int)param_2 != 0.0) && (param_1[0x3e] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x9c))();
    fVar1 = (float)param_1[0x58] - (*(float *)(iVar2 + 0x160) - 1.5707964);
    fVar3 = (float10)FUN_005b1630(fVar1);
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar5 = (float)(fVar4 * (float10)(float)param_1[0x52]);
    param_2 = fVar1;
    if (fVar5 <= ABS((float)fVar3)) {
      if ((float)fVar3 < 0.0) {
        fVar5 = -fVar5;
      }
      fVar3 = (float10)FUN_005b1630(fVar5);
      param_2 = (float)fVar3;
    }
    (**(code **)(*param_1 + 0x9c))(param_2);
    FUN_0049cd90(param_2);
  }
  return;
}

