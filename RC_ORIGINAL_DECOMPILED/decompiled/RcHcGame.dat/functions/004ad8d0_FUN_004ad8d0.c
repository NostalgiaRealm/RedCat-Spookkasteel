/*
 * FUN_004ad8d0 at 004ad8d0
 * undefined FUN_004ad8d0(void)
 * Address ranges: 004ad8d0-004ad91a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ad8d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064ea98;
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

