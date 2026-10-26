/*
 * FUN_00414220 at 00414220
 * undefined FUN_00414220(void)
 * Address ranges: 00414220-004142c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b10c slot 47 for .?AVCRcShootSpider@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b10c slot 47 for
   .?AVCRcShootSpider@@. Original bytes unchanged; names and types still inferred. */

void FUN_00414220(undefined4 param_1)

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
    puVar2 = &DAT_006b48b0;
    if (!bVar3) {
      puVar2 = &DAT_006b4880;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b4858,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b4830,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4808,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b47e0,0,0x3f800000);
  }
  return;
}

