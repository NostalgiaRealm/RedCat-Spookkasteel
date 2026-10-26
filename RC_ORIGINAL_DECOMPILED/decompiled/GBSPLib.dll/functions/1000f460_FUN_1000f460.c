/*
 * FUN_1000f460 at 1000f460
 * undefined FUN_1000f460(void)
 * Address ranges: 1000f460-1000f625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000f460(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_d8 [16];
  char acStack_c8 [200];
  
  (*DAT_1014e35c)(s_____Save_Portal_File_____100393c0);
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = acStack_c8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10012920(acStack_c8);
  FUN_100128c0(acStack_c8,&DAT_100393b8);
  iVar2 = FUN_1002770a(acStack_c8,&DAT_10036404);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_SavePortalFile__Error_opening__s_10039388,acStack_c8);
    return 0;
  }
  DAT_1031301c = 0;
  DAT_10313020 = 0;
  iVar3 = FUN_1000f0a0(*param_1);
  if (iVar3 == 0) {
    FUN_10027620(iVar2);
    (*DAT_1014e358)(s_SavePortalFile__Could_not_PrepPo_1003935c);
    return 0;
  }
  if (DAT_10313020 != param_1[0x34]) {
    (*DAT_1014e358)(s_SavePortalFile__Invalid_number_o_1003932c);
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_GBSP_PRTFILE_1003931c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = acStack_d8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10027a7a(acStack_d8,1,0xc,iVar2);
  FUN_10027a7a(&DAT_1031301c,4,1,iVar2);
  FUN_10027a7a(param_1 + 0x34,4,1,iVar2);
  iVar3 = FUN_1000f1c0(*param_1,iVar2);
  if (iVar3 == 0) {
    FUN_10027620(iVar2);
    return 0;
  }
  FUN_10027620(iVar2);
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Num_Portals____5i_10039300,DAT_1031301c);
    (*DAT_1014e35c)(s_Num_Portal_Leafs____5i_100392e4,DAT_10313020);
  }
  return 1;
}

