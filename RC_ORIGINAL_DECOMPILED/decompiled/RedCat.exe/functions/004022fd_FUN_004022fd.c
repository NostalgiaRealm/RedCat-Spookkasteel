/*
 * FUN_004022fd at 004022fd
 * int * __cdecl FUN_004022fd(int param_1)
 * Address ranges: 004022fd-0040233f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_004022fd(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00407240;
  if (DAT_00407240 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_00407240 + DAT_004072c0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_00407240 + DAT_004072c0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

