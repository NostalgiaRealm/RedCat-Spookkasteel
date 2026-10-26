/*
 * FUN_00426fa0 at 00426fa0
 * undefined FUN_00426fa0(void)
 * Address ranges: 00426fa0-00426fe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00426fa0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_005ab4d0();
  return;
}

