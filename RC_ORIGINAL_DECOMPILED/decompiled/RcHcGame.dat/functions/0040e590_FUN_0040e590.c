/*
 * FUN_0040e590 at 0040e590
 * undefined FUN_0040e590(void)
 * Address ranges: 0040e590-0040e632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ac90 slot 47 for .?AVCRcKnight@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ac90 slot 47 for
   .?AVCRcKnight@@. Original bytes unchanged; names and types still inferred. */

void FUN_0040e590(undefined4 param_1)

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
    puVar2 = &DAT_006b4238;
    if (!bVar3) {
      puVar2 = &DAT_006b4208;
    }
    FUN_00423be0(puVar2,0,0x3f800000);
    return;
  case 1:
    FUN_00423be0(&DAT_006b41e0,0,0x3f800000);
    return;
  case 2:
    FUN_00423be0(&DAT_006b41b8,0,0x3f800000);
    return;
  case 3:
    FUN_00423be0(&DAT_006b4190,0,0x3f800000);
    return;
  case 4:
    FUN_00423be0(&DAT_006b4168,0,0x3f800000);
  }
  return;
}

