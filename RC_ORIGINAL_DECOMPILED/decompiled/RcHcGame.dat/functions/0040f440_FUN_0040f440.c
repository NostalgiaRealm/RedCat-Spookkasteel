/*
 * FUN_0040f440 at 0040f440
 * undefined FUN_0040f440(void)
 * Address ranges: 0040f440-0040f4e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ad74 slot 47 for .?AVCRcPlant@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ad74 slot 47 for
   .?AVCRcPlant@@. Original bytes unchanged; names and types still inferred. */

void FUN_0040f440(undefined4 param_1)

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
    puVar2 = &DAT_006b4330;
    if (!bVar3) {
      puVar2 = &DAT_006b4300;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b42d8,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b42b0,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4288,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b4260,0,0x3f800000);
  }
  return;
}

