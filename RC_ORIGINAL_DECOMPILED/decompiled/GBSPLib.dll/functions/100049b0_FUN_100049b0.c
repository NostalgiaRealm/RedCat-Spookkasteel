/*
 * FUN_100049b0 at 100049b0
 * undefined FUN_100049b0(void)
 * Address ranges: 100049b0-10004c01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100049b0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iStack_428;
  undefined4 *puStack_424;
  int iStack_420;
  int iStack_41c;
  undefined4 uStack_418;
  char acStack_414 [8];
  undefined1 auStack_40c [12];
  undefined1 auStack_400 [1024];
  
  (*DAT_1014e35c)(s_____WriteLeakFile_____10036c24);
  FUN_1002771d(auStack_400,s__s_Pnt_10036c1c,param_1);
  iVar5 = FUN_1002770a(auStack_400,&DAT_10036404);
  if (iVar5 == 0) {
    (*DAT_1014e358)(s_WriteLeakFile__Couldn_t_open__s_10036bf8,param_1);
  }
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_10036bf0;
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = acStack_414;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  iStack_428 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  FUN_10027a7a(acStack_414,1,4,iVar5);
  uStack_418 = FUN_100278f7(iVar5);
  FUN_10027a7a(&iStack_428,4,1,iVar5);
  FUN_10027a7a(&DAT_10265d48 + DAT_1014e240 * 0x2b,0xc,1,iVar5);
  iStack_428 = iStack_428 + 1;
  iStack_420 = 0;
  iVar3 = iStack_41c;
  while ((param_2 != 0 && (iStack_41c = *(int *)(param_2 + 0x48), 1 < iStack_41c))) {
    iVar10 = 0;
    puStack_424 = (undefined4 *)0x0;
    (*DAT_1014e35c)(s_Occupied____5i_10036bdc,iStack_41c);
    for (puVar2 = *(undefined4 **)(param_2 + 0x34); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[((puVar2[1] == param_2) == 0) + 3]) {
      iVar3 = puVar2[(puVar2[1] == param_2) + 1];
      if (iVar3 == param_3) {
        iStack_420 = 1;
        break;
      }
      if ((*(int *)(iVar3 + 0x48) != 0) && (*(int *)(iVar3 + 0x48) < iStack_41c)) {
        iStack_41c = *(int *)(iVar3 + 0x48);
        iVar10 = iVar3;
        puStack_424 = puVar2;
      }
    }
    iVar3 = iStack_41c;
    if (iStack_420 != 0) break;
    param_2 = iVar10;
    if (puStack_424 != (undefined4 *)0x0) {
      if (iVar10 == 0) break;
      if (iVar10 != param_3) {
        FUN_1000d810(*puStack_424,auStack_40c);
        FUN_10027a7a(auStack_40c,0xc,1,iVar5);
        iStack_428 = iStack_428 + 1;
        FUN_10004930(iVar10,auStack_40c);
        FUN_10027a7a(auStack_40c,0xc,1,iVar5);
        iStack_428 = iStack_428 + 1;
        iVar3 = iStack_41c;
      }
    }
  }
  iStack_41c = iVar3;
  (*DAT_1014e35c)(s_Num_Points____5i_10036bc4,iStack_428);
  uVar6 = FUN_100278f7(iVar5);
  uVar4 = uStack_418;
  (*DAT_1014e35c)(s_Pos1____5i_10036bb8,uStack_418);
  (*DAT_1014e35c)(s_Pos2____5i_10036bac,uVar6);
  FUN_1002783e(iVar5,uVar4,0);
  FUN_10027a7a(&iStack_428,4,1,iVar5);
  FUN_1002783e(iVar5,uVar6,0);
  FUN_10027620(iVar5);
  return 1;
}

