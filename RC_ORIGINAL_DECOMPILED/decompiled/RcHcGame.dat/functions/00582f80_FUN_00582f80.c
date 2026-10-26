/*
 * FUN_00582f80 at 00582f80
 * undefined FUN_00582f80(void)
 * Address ranges: 00582f80-00582fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc78 slot 3 for .?AVCAdamEffectPlanetoid@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc78 slot 3 for
   .?AVCAdamEffectPlanetoid@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00582f80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_005630e0();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    piVar4 = (int *)(param_1 + 0xfc);
    do {
      iVar1 = *piVar4;
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int *)(iVar1 + 0x3c) != 0)) &&
         (iVar1 = FUN_00582220(), *(int *)(iVar1 + 0x34) != 0)) {
        piVar2 = (int *)FUN_00582220();
        (**(code **)(*piVar2 + 0xc))();
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x17c));
  }
  return;
}

