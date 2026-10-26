/*
 * FUN_00406a80 at 00406a80
 * undefined FUN_00406a80(void)
 * Address ranges: 00406a80-00406ac1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a738 slot 2 for .?AVCRcPlantDefaultState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a738 slot 2 for
   .?AVCRcPlantDefaultState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00406a80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar2 = FUN_0060a4a0();
  (**(code **)(iVar1 + 0x8c))(1,0,(float)(iVar2 % 10000) * 1.00000025e-05 + 0.9);
  return;
}

