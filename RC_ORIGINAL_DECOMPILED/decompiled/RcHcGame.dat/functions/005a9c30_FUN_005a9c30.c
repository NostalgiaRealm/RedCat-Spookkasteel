/*
 * FUN_005a9c30 at 005a9c30
 * undefined FUN_005a9c30(void)
 * Address ranges: 005a9c30-005a9ca8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005a9c30(int param_1,LPMSG param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  BVar1 = PeekMessageA(param_2,*(HWND *)(param_1 + 0x54),0,0,1);
  if (BVar1 != 0) {
    iVar2 = FUN_00517670();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 != 0) {
      FUN_005a9cb0(param_2);
    }
    BVar1 = TranslateMessage(param_2);
    if (BVar1 == 0) {
      DispatchMessageA(param_2);
    }
    return 1;
  }
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    param_2->hwnd = (HWND)0x0;
    param_2 = (LPMSG)&param_2->message;
  }
  return 0;
}

