/*
 * FUN_005e2f00 at 005e2f00
 * undefined FUN_005e2f00(void)
 * Address ranges: 005e2f00-005e2f59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e2f00(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_0064f00c;
  if ((param_1[2] == 3) && (iVar2 = param_1[4], iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iVar3 + -1));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_005fe5f0(iVar2);
  }
  return;
}

