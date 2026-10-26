/*
 * FUN_0040fee0 at 0040fee0
 * undefined FUN_0040fee0(void)
 * Address ranges: 0040fee0-0040ff82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ae50 slot 47 for .?AVCRcPoisonFrog@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ae50 slot 47 for
   .?AVCRcPoisonFrog@@. Original bytes unchanged; names and types still inferred. */

void FUN_0040fee0(undefined4 param_1)

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
    puVar2 = &DAT_006b4428;
    if (!bVar3) {
      puVar2 = &DAT_006b43f8;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b43d0,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b43a8,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4380,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b4358,0,0x3f800000);
  }
  return;
}

