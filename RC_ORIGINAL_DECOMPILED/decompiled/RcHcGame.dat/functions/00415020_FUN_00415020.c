/*
 * FUN_00415020 at 00415020
 * undefined FUN_00415020(void)
 * Address ranges: 00415020-004150c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 47 for .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b1f0 slot 47 for
   .?AVCRcSkeleton@@. Original bytes unchanged; names and types still inferred. */

void FUN_00415020(undefined4 param_1)

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
    puVar2 = &DAT_006b49a8;
    if (!bVar3) {
      puVar2 = &DAT_006b4978;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b4950,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b4928,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4900,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b48d8,0,0x3f800000);
  }
  return;
}

