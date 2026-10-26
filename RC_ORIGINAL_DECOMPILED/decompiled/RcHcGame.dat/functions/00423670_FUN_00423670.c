/*
 * FUN_00423670 at 00423670
 * undefined FUN_00423670(void)
 * Address ranges: 00423670-004236a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 18 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 18 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00423670(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined1 auStack_c [12];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa4))();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x48))(auStack_c);
  *unaff_retaddr = *puVar2;
  unaff_retaddr[1] = puVar2[1];
  unaff_retaddr[2] = puVar2[2];
  return;
}

