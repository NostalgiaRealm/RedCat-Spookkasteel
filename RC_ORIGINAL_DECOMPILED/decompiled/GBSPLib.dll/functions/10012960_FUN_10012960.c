/*
 * FUN_10012960 at 10012960
 * undefined FUN_10012960(void)
 * Address ranges: 10012960-10012ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012960(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_c8 [200];
  
  iVar5 = 0;
  (*DAT_1014e35c)(s_____Vis_GBSP_File_____1003a198);
  DAT_104e98e4 = (uint)(param_2[2] == 0);
  DAT_104e98e0 = *param_2;
  DAT_1003a0e4 = param_2[1];
  iVar2 = FUN_10005270(param_1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_PvsGBSPFile__Could_not_load_GBSP_1003a16c,param_1);
  }
  else {
    FUN_10012af0();
    iVar5 = FUN_10014700(param_1,0,4);
    if (iVar5 == 0) {
      (*DAT_1014e358)(s_VisGBSPFile__Could_not_open_GBSP_1003a130,param_1);
    }
    else {
      uVar3 = 0xffffffff;
      pcVar6 = param_1;
      do {
        pcVar7 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar7 + -uVar3;
      pcVar7 = acStack_c8;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_10012920(acStack_c8);
      FUN_100128c0(acStack_c8,&DAT_100393b8);
      iVar2 = FUN_10012e90(acStack_c8);
      if (iVar2 != 0) {
        (*DAT_1014e35c)(s_NumPortals____5i_1003a114,DAT_104e98c8);
        iVar2 = FUN_100132b0(iVar5);
        if (iVar2 != 0) {
          iVar2 = FUN_10012b20();
          if (iVar2 != 0) {
            DAT_1014e2b0 = DAT_104e98bc * DAT_104e98dc;
            DAT_1014e308 = DAT_104e98b0;
            iVar2 = FUN_10013680(iVar5);
            if (iVar2 != 0) {
              FUN_10013740();
              FUN_100052c0();
              FUN_10014990();
              return 1;
            }
          }
        }
      }
    }
  }
  (*DAT_1014e358)(s_PvsGBSPFile__Could_not_vis_the_f_1003a0e8,param_1);
  if (iVar5 != 0) {
    FUN_10014990();
  }
  FUN_10013740();
  FUN_100052c0();
  return 0;
}

