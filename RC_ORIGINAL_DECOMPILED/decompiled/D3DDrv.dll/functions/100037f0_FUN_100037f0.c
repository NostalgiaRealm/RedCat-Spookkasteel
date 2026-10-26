/*
 * FUN_100037f0 at 100037f0
 * undefined4 __stdcall FUN_100037f0(void)
 * Address ranges: 100037f0-100038e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100037f0(void)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined4 *puVar2;
  LONG LStack_8c;
  LONG LStack_88;
  undefined4 local_7c [19];
  undefined4 uStack_30;
  HWND pHStack_4;
  
  FUN_100020f0(s_____D3DMain_RememberOldMode_____100147e0);
  puVar2 = local_7c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_7c;
  local_7c[0] = 0x7c;
  iVar1 = (**(code **)(*DAT_100274a8 + 0x30))(DAT_100274a8);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_Getting_the_current_display_mode_100147b0);
    return 0;
  }
  GetClientRect(pHStack_4,(LPRECT)&stack0xffffff6c);
  DAT_10027070 = uStack_30;
  _DAT_10027068 = local_7c[1];
  _DAT_1002706c = local_7c[0];
  DAT_10027080 = LStack_8c;
  DAT_10027084 = LStack_88;
  GetWindowRect(pHStack_4,(LPRECT)&stack0xffffff6c);
  DAT_10027090 = puVar2;
  DAT_10027098 = LStack_8c;
  DAT_1002709c = LStack_88;
  DAT_10027094 = unaff_EDI;
  DAT_100270a0 = GetWindowLongA(pHStack_4,-0x10);
  FUN_100037b0(pHStack_4);
  return 1;
}

