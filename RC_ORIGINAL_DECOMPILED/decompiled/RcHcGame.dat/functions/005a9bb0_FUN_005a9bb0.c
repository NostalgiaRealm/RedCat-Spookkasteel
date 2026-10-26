/*
 * FUN_005a9bb0 at 005a9bb0
 * undefined FUN_005a9bb0(void)
 * Address ranges: 005a9bb0-005a9c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005a9bb0(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_005aac70(param_3);
  if ((char)uVar2 != '\0') {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      uVar1 = GetAsyncKeyState(param_2);
      return (uint)(uVar1 >> 0xf);
    }
    iVar4 = 0;
    uVar2 = FUN_005a9940(param_2);
    if (0 < (int)uVar2) {
      do {
        iVar3 = FUN_005a9700(param_2,iVar4);
        if (((-1 < iVar3) && (iVar3 < 0x100)) && (uVar2 = FUN_005a7570(iVar3), (char)uVar2 != '\0'))
        {
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        uVar2 = FUN_005a9940(param_2);
      } while (iVar4 < (int)uVar2);
    }
  }
  return uVar2 & 0xffffff00;
}

