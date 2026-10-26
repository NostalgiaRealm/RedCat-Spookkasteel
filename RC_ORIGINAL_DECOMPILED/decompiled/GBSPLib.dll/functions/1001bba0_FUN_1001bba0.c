/*
 * FUN_1001bba0 at 1001bba0
 * undefined FUN_1001bba0(void)
 * Address ranges: 1001bba0-1001bcc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001bba0(int *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar6 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (0xfe < ~uVar6 - 1) {
    FUN_10015fb0(0x5c,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x143,&DAT_10265ce0,0);
    return 0;
  }
  iVar3 = FUN_1001bb80();
  uVar6 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_10014370(*param_1,~uVar6 + 0x10 + iVar3);
  if (iVar4 == 0) {
    FUN_10015fb0(0x5b,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x153,&DAT_10265ce0,0);
    return 0;
  }
  *param_1 = iVar4;
  *(int *)(iVar4 + 4) = iVar4;
  piVar2 = (int *)*param_1;
  iVar4 = 0;
  if (0 < *piVar2) {
    piVar5 = piVar2 + 2;
    do {
      iVar4 = iVar4 + 1;
      *piVar5 = *piVar5 + 4;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *piVar2);
  }
  iVar4 = *piVar2;
  if (0 < iVar4) {
    FUN_10029010(piVar2 + iVar4 + 3,piVar2 + iVar4 + 2,iVar3 + iVar4 * -4);
  }
  piVar2[*piVar2 + 2] = iVar3 + 4;
  uVar6 = 0xffffffff;
  do {
    pcVar8 = param_2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = (char *)(piVar2[*piVar2 + 2] + 8 + (int)piVar2);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *(int *)*param_1 = *(int *)*param_1 + 1;
  return 1;
}

