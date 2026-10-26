/*
 * FUN_00424510 at 00424510
 * undefined FUN_00424510(void)
 * Address ranges: 00424510-004245fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 29 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 29 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00424510(int *param_1,float param_2,int param_3)

{
  int iVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 *puVar5;
  float fVar6;
  float fStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((float)param_3 != 0.0) {
    iVar1 = (**(code **)(*param_1 + 0x9c))();
    fStack_1c = *(float *)(iVar1 + 0x160) - 1.5707964;
    puVar5 = auStack_c;
    (**(code **)(*param_1 + 0x48))(puVar5,auStack_18);
    FUN_005b2fe0(puVar5);
    fVar2 = (float10)FUN_005b15f0(&fStack_1c);
    fVar3 = (float10)FUN_005b1630((float)(fVar2 - (float10)unaff_ESI));
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar6 = (float)(fVar4 * (float10)(float)param_1[0x52]);
    param_2 = (float)(fVar2 - (float10)unaff_ESI);
    if (fVar6 <= ABS((float)fVar3)) {
      if ((float)fVar3 < 0.0) {
        fVar6 = -fVar6;
      }
      fVar2 = (float10)FUN_005b1630(fVar6);
      param_2 = (float)fVar2;
    }
    (**(code **)(*param_1 + 0x9c))(param_2);
    FUN_0049cd90(param_2);
  }
  return;
}

