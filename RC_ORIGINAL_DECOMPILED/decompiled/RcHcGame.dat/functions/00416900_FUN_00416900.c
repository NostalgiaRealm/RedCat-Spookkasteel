/*
 * FUN_00416900 at 00416900
 * undefined FUN_00416900(void)
 * Address ranges: 00416900-004169a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b3ac slot 47 for .?AVCRcTouchGhost@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b3ac slot 47 for
   .?AVCRcTouchGhost@@. Original bytes unchanged; names and types still inferred. */

void FUN_00416900(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_0060a4a0();
    uVar1 = uVar1 & 0x80000001;
    bVar3 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    puVar2 = &DAT_006b4b70;
    if (!bVar3) {
      puVar2 = &DAT_006b4b40;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b4b18,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b4af0,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4ac8,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b4aa0,0,0x3f800000);
  }
  return;
}

