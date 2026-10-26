/*
 * FUN_10004840 at 10004840
 * undefined4 __stdcall FUN_10004840(void)
 * Address ranges: 10004840-10004957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004840(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  tagRECT tStack_94;
  undefined4 local_7c [19];
  undefined4 uStack_30;
  HWND pHStack_4;
  
  FUN_10002700(s_____D3DMain_RememberOldMode_____10017c44);
  puVar2 = local_7c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_7c[0] = 0x7c;
  iVar1 = (**(code **)(*DAT_1001bcb0 + 0x30))(DAT_1001bcb0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_10002700(s_Getting_the_current_display_mode_10017c68);
    return 0;
  }
  GetClientRect(pHStack_4,&tStack_94);
  DAT_1001b478 = uStack_30;
  _DAT_1001b470 = local_7c[1];
  _DAT_1001b474 = local_7c[0];
  DAT_1001b488 = tStack_94.right;
  DAT_1001b48c = tStack_94.bottom;
  GetWindowRect(pHStack_4,&tStack_94);
  DAT_1001b498 = tStack_94.left;
  DAT_1001b49c = tStack_94.top;
  DAT_1001b4a0 = tStack_94.right;
  DAT_1001b4a4 = tStack_94.bottom;
  DAT_1001b4a8 = GetWindowLongA(pHStack_4,-0x10);
  LVar3 = 0;
  ClientToScreen(pHStack_4,(LPPOINT)&stack0xffffff64);
  DAT_1001b490 = LVar3;
  DAT_1001b494 = 0;
  return 1;
}

