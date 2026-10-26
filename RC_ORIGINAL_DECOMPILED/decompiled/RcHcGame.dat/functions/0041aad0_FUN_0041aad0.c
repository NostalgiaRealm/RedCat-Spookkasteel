/*
 * FUN_0041aad0 at 0041aad0
 * undefined FUN_0041aad0(void)
 * Address ranges: 0041aad0-0041ab02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b73c slot 18 for .?AVCRcMachine@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b73c slot 18 for
   .?AVCRcMachine@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0041aad0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_retaddr;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xf8) + 0x48))(local_c);
  *unaff_retaddr = *puVar1;
  unaff_retaddr[1] = puVar1[1];
  unaff_retaddr[2] = puVar1[2];
  return;
}

