/*
 * FUN_10008fa3 at 10008fa3
 * undefined __cdecl FUN_10008fa3(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 * Address ranges: 10008fa3-10008fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008fa3(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000c1fc(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}

