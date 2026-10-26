/*
 * FUN_00408d80 at 00408d80
 * undefined FUN_00408d80(void)
 * Address ranges: 00408d80-00408dde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a8dc slot 2 for .?AV?$CRcSpiderAttack@VCRcShootSpider@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a8dc slot 2 for
   .?AV?$CRcSpiderAttack@VCRcShootSpider@@@@. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_00408d80(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_c [12];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x48))(local_c);
  fVar1 = *(float *)(iVar2 + 4);
  fVar3 = (float10)FUN_00414150();
  fVar4 = (float10)FUN_00414160();
  if (ABS(fVar4 - (float10)fVar1) < (float10)(float)ABS(fVar3 - (float10)fVar1)) {
    FUN_004091a0();
    return;
  }
  FUN_00408ca0();
  return;
}

