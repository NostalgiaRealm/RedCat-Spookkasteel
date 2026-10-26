/*
 * FUN_100038f0 at 100038f0
 * undefined4 __cdecl FUN_100038f0(HWND param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * Address ranges: 100038f0-10003ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_100038f0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
  pcVar5 = &DAT_100148e8;
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
  pcVar5 = &DAT_100148c4;
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
  FUN_100020f0(s_____D3DMain_SetDisplayMode_____100148c8);
  FUN_100020f0(s_W___i__H___i__Bpp___i__FullScree_10014898);
  if (param_5 == 0) {
    iVar2 = (**(code **)(*DAT_100274a8 + 0x50))(DAT_100274a8,param_1,8);
    uStack_18 = param_3;
    uStack_1c = param_2;
    uStack_14 = param_4;
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_100020f0(s_SetCooperativeLevel_to_normal_fa_10014804);
      return 0;
    }
  }
  else {
    iVar2 = (**(code **)(*DAT_100274a8 + 0x50))(DAT_100274a8,param_1,0x11);
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_100020f0(s_SetCooperativeLevel_to_fullscree_10014868);
      return 0;
    }
    iVar2 = (**(code **)(*DAT_100274a8 + 0x54))(DAT_100274a8,param_2,param_3,param_4,0,0);
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_100020f0(s_SetFullScreenDisplayMode__Mode___10014830);
      return 0;
    }
    iVar2 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    SetWindowLongA(param_1,-0x10,DAT_100270a0 | 0x80000000);
    SetWindowLongA(param_1,-0x10,DAT_100270a0 & 0xff30ffff);
    SetWindowPos(DAT_10026fe8,(HWND)0x0,0,0,iVar2,cy,0x104);
    ShowWindow(DAT_10026fe8,1);
  }
  DAT_1002707c = uStack_14;
  DAT_10026fe8 = param_1;
  DAT_10027074 = uStack_1c;
  DAT_10027078 = uStack_18;
  DAT_1002a6c8 = uStack_10;
  DAT_100270a4 = 1;
  return 1;
}

