/*
 * FUN_0040c790 at 0040c790
 * undefined FUN_0040c790(void)
 * Address ranges: 0040c790-0040c832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 47 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 47 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void FUN_0040c790(undefined4 param_1)

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
    puVar2 = &DAT_006b4048;
    if (!bVar3) {
      puVar2 = &DAT_006b4018;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b3ff0,0,0x3fc00000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b3fc8,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b3fa0,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b3f78,0,0x3f800000);
  }
  return;
}

