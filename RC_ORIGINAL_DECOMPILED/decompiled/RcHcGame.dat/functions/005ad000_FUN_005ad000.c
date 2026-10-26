/*
 * FUN_005ad000 at 005ad000
 * undefined FUN_005ad000(void)
 * Address ranges: 005ad000-005ad121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ad000(int param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  undefined2 local_206;
  byte local_204 [516];
  
  local_206 = DAT_006a678c;
  pbVar8 = local_204;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8 = pbVar8 + 4;
  }
  *pbVar8 = 0;
  uVar6 = 0xffffffff;
  pcVar3 = (char *)&local_206;
  do {
    pcVar9 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pbVar8 = (byte *)(pcVar9 + -uVar6);
  pbVar4 = local_204;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar4 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_005ad130(param_2);
  FUN_005a46a0(param_2);
  iVar5 = FUN_005a56e0(param_1 + 0x34);
  if (iVar5 != 0) {
    iVar5 = FUN_005a5b60(param_1 + 0x24);
    if (iVar5 != 0) {
      pcVar3 = *(char **)(iVar5 + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pbVar8 = (byte *)(pcVar9 + -uVar6);
      pbVar4 = local_204;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar4 = pbVar4 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar4 = pbVar4 + 1;
      }
    }
  }
  pbVar8 = (byte *)&local_206;
  pbVar4 = local_204;
  do {
    bVar2 = *pbVar4;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_005ad0db:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_005ad0e0;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_005ad0db;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_005ad0e0:
  if (iVar5 != 0) {
    uVar6 = FUN_005acde0(local_204);
    if ((uVar6 & 6) == 0) {
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
    return 1;
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  FUN_005ad3d0(0);
  return 0;
}

