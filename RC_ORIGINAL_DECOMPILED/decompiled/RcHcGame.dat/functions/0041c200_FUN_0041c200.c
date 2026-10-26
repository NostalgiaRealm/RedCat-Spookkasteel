/*
 * FUN_0041c200 at 0041c200
 * undefined FUN_0041c200(void)
 * Address ranges: 0041c200-0041c27d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 2 for .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 2 for
   .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0041c200(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00422fb0(param_2,param_3);
  if ((char)param_1[0x59] == '\0') {
    (**(code **)(*param_1 + 0x70))(param_3);
  }
  if (param_1[0x8c] != 0) {
    iVar2 = (**(code **)(*param_1 + 0x9c))();
    fVar1 = *(float *)(iVar2 + 0x160);
    fVar3 = (float10)FUN_0041b020();
    FUN_0041b120((float)((float10)fVar1 - fVar3));
    FUN_004a09f0(param_3);
  }
  return;
}

