/*
 * FUN_00408f90 at 00408f90
 * undefined FUN_00408f90(void)
 * Address ranges: 00408f90-00408fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a920 slot 2 for .?AV?$CRcSpiderAttack@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a920 slot 2 for
   .?AV?$CRcSpiderAttack@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_00408f90(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_c [12];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x48))(local_c);
  fVar1 = *(float *)(iVar2 + 4);
  fVar3 = (float10)FUN_004183f0();
  fVar4 = (float10)FUN_00418400();
  if (ABS(fVar4 - (float10)fVar1) < (float10)(float)ABS(fVar3 - (float10)fVar1)) {
    FUN_00409220();
    return;
  }
  FUN_00408d10();
  return;
}

