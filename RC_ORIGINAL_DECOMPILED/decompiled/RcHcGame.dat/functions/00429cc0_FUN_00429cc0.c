/*
 * FUN_00429cc0 at 00429cc0
 * undefined FUN_00429cc0(void)
 * Address ranges: 00429cc0-00429d0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00429cc0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064abb0;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_005ab4d0();
  return;
}

