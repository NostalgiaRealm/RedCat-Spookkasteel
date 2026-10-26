/*
 * FUN_00433810 at 00433810
 * undefined FUN_00433810(void)
 * Address ranges: 00433810-0043381f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 3 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 3 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00433810(int param_1)

{
  if (*(int **)(param_1 + 0x334) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x334) + 0xc))();
    return;
  }
  return;
}

