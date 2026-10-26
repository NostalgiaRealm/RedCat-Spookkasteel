/*
 * FUN_0060b402 at 0060b402
 * undefined FUN_0060b402(void)
 * Address ranges: 0060b402-0060b40e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ee20 slot 1 for .?AVCAdamQuitException@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ee20 slot 1 for
   .?AVCAdamQuitException@@. Original bytes unchanged; names and types still inferred. */

char * __fastcall FUN_0060b402(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}

