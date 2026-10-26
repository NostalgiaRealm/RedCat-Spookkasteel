/*
 * FUN_00406ad0 at 00406ad0
 * undefined FUN_00406ad0(void)
 * Address ranges: 00406ad0-00406b24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a738 slot 1 for .?AVCRcPlantDefaultState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a738 slot 1 for
   .?AVCRcPlantDefaultState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00406ad0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  FUN_00423700();
  cVar2 = FUN_004a0d00();
  if (cVar2 != '\0') {
    iVar1 = **(int **)(param_1 + 0x28);
    iVar3 = FUN_0060a4a0();
    (**(code **)(iVar1 + 0x8c))(1,0,(float)(iVar3 % 10000) * 1.00000025e-05 + 0.9);
  }
  return;
}

