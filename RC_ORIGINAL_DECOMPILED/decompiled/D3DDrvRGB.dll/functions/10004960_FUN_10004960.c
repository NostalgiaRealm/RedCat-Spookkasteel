/*
 * FUN_10004960 at 10004960
 * undefined4 __cdecl FUN_10004960(HWND param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * Address ranges: 10004960-10004b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_10004960(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int cy;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_40 [32];
  char local_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_10017c98;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_40;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_10017c9c;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_20;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_10002700(s_____D3DMain_SetDisplayMode_____10017ca0);
  FUN_10002700(s_W___i__H___i__Bpp___i__FullScree_10017cc0);
  if (param_5 == 0) {
    iVar2 = (**(code **)(*DAT_1001bcb0 + 0x50))(DAT_1001bcb0,param_1,8);
    uStack_18 = param_3;
    uStack_1c = param_2;
    uStack_14 = param_4;
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_10002700(s_SetCooperativeLevel_to_normal_fa_10017d54);
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*DAT_1001bcb0 + 0x50))(DAT_1001bcb0,param_1,0x11);
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_10002700(s_SetCooperativeLevel_to_fullscree_10017cec);
      return 0;
    }
    iVar2 = (**(code **)(*DAT_1001bcb0 + 0x54))(DAT_1001bcb0,param_2,param_3,param_4,0,0);
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_10002700(s_SetFullScreenDisplayMode__Mode___10017d1c);
      return 0;
    }
    iVar2 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    SetWindowLongA(param_1,-0x10,DAT_1001b4a8 | 0x80000000);
    SetWindowLongA(param_1,-0x10,DAT_1001b4a8 & 0xff30ffff);
    SetWindowPos(DAT_1001b3f0,(HWND)0x0,0,0,iVar2,cy,0x104);
    ShowWindow(DAT_1001b3f0,1);
  }
  DAT_1001b484 = uStack_14;
  DAT_1001b3f0 = param_1;
  DAT_1001b47c = uStack_1c;
  DAT_1001b480 = uStack_18;
  DAT_1001eee0 = uStack_10;
  DAT_1001b4ac = 1;
  return 1;
}

