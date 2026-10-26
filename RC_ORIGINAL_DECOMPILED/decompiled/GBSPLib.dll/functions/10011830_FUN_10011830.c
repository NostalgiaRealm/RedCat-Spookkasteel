/*
 * FUN_10011830 at 10011830
 * undefined FUN_10011830(void)
 * Address ranges: 10011830-100118db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10011830(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = 0;
  if (0 < DAT_10313064) {
    piVar5 = &DAT_10393090;
    do {
      iVar2 = FUN_100332c0(param_1,piVar5 + -8);
      if ((iVar2 == 0) && (*piVar5 == param_2)) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0xd;
    } while (iVar6 < DAT_10313064);
  }
  iVar6 = DAT_10313064;
  if (0x3ff < DAT_10313064) {
    (*DAT_1014e358)(s_FindTextureIndex__Too_many_Textu_10039cfc);
    return -1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar7 + -uVar3;
  pcVar8 = &DAT_10393070 + DAT_10313064 * 0x34;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  (&DAT_10393090)[DAT_10313064 * 0xd] = param_2;
  DAT_10313064 = DAT_10313064 + 1;
  return iVar6;
}

