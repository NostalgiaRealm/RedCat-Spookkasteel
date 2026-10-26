/*
 * FUN_005f45c0 at 005f45c0
 * undefined FUN_005f45c0(void)
 * Address ranges: 005f45c0-005f45f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f45c0(int *param_1)

{
  char cVar1;
  
  if (((char)param_1[10] == '\0') && (*(char *)((int)param_1 + 0x29) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x3c))();
    if (cVar1 == '\0') {
      FUN_005fa550(&DAT_0070fb30,param_1 + 3,0xfa4,s_argument_not_used_006b14bc);
    }
  }
  return;
}

