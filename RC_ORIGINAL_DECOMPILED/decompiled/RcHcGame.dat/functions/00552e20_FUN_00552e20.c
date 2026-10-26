/*
 * FUN_00552e20 at 00552e20
 * undefined FUN_00552e20(void)
 * Address ranges: 00552e20-00552e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00552e20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064f818;
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  return;
}

