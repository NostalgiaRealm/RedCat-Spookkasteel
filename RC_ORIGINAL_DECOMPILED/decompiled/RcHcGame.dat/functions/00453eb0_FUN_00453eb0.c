/*
 * FUN_00453eb0 at 00453eb0
 * undefined FUN_00453eb0(void)
 * Address ranges: 00453eb0-00453ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00453eb0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064d380;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

