/*
 * FUN_10004520 at 10004520
 * undefined4 __cdecl FUN_10004520(char * param_1)
 * Address ranges: 10004520-100046a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10004520(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  uint uVar5;
  uint unaff_ESI;
  undefined **ppuVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *local_700 [95];
  undefined4 auStack_584 [95];
  byte abStack_408 [1032];
  
  FUN_100020f0(s_____D3DMain_CreateDDFromName_____1001519c);
  uVar4 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (0x3ff < ~uVar4 - 1) {
    return 0;
  }
  FUN_100020f0(s_Name___s_10015190);
  local_700[1] = &DAT_10016ae8;
  local_700[0] = (undefined *)0x0;
  iVar3 = DirectDrawEnumerateA(FUN_10004210,local_700);
  if (iVar3 != 0) {
    FUN_100020f0(s_D3DMain_CreateDDFromName__Direct_10015158);
    return 0;
  }
  FUN_1000816d(abStack_408,(byte *)s__D3D__s_10014fcc);
  bVar2 = FUN_10004710(abStack_408,(int *)&stack0xfffff8f8);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  ppuVar6 = local_700;
  for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar6 = (undefined *)0x0;
    ppuVar6 = ppuVar6 + 1;
  }
  puVar7 = auStack_584;
  for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_700[0] = (undefined *)0x17c;
  auStack_584[0] = 0x17c;
  iVar3 = (**(code **)(*DAT_100274a8 + 0x2c))(DAT_100274a8,local_700,auStack_584);
  if (iVar3 < 0) {
    FUN_100020f0(s_D3DMain_CreateDDFromName__GetCap_1001512c);
    FUN_10001f70();
    return 0;
  }
  if ((unaff_ESI & 0x80000) == 0) {
    pcVar9 = s_DDCAPS2_CANRENDERWINDOWED___NO_100150dc;
  }
  else {
    pcVar9 = s_DDCAPS2_CANRENDERWINDOWED___YES_10015104;
  }
  FUN_100020f0(pcVar9);
  if ((unaff_ESI & 2) == 0) {
    pcVar9 = s_DDCAPS2_NO2DDURING3DSCENE___NO_1001508c;
  }
  else {
    pcVar9 = s_DDCAPS2_NO2DDURING3DSCENE___YES_100150b4;
  }
  FUN_100020f0(pcVar9);
  uVar4 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar9 = pcVar9 + -uVar4;
  pcVar8 = (char *)&DAT_100270a8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return 1;
}

