/*
 * FUN_005d6f50 at 005d6f50
 * undefined FUN_005d6f50(void)
 * Address ranges: 005d6f50-005d7793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005d6f50(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_170;
  uint local_16c;
  int local_168;
  undefined4 local_164;
  undefined1 local_160 [32];
  undefined1 local_140 [64];
  undefined1 local_100 [8];
  undefined1 local_f8 [248];
  
  iVar2 = FUN_005cd390(4);
  if (iVar2 == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x149,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_005cf3b0(0x14);
  if (piVar3 == (int *)0x0) {
    FUN_005cf220(0x53,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x150,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  piVar3[2] = 0;
  *piVar3 = 0;
  if (local_170 != 0x56454b54) {
    if (local_170 == 0x42454b54) {
      iVar2 = FUN_005cd390(4);
      if (iVar2 == 0) {
        FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1be,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
      if (local_170 != 0xf0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1c4,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
      iVar2 = FUN_005cd390(4);
      if (iVar2 == 0) {
        FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1cb,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
      iVar2 = FUN_005cf3b0(piVar3[1]);
      piVar3[2] = iVar2;
      if (piVar3[2] == 0) {
        FUN_005cf220(0x53,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1d3,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
      iVar2 = FUN_005cd390(piVar3[1]);
      if (iVar2 == 0) {
        FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1da,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
      iVar2 = FUN_005de420();
      *piVar3 = iVar2;
      if (*piVar3 == 0) {
        FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1e1,
                     &DAT_006b3f70,0);
        FUN_005d6ef0();
        return (int *)0x0;
      }
    }
    return piVar3;
  }
  iVar2 = FUN_005cd370(0x20);
  if (iVar2 == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x16e,&DAT_006b3f70,
                 0);
    return (int *)0x0;
  }
  FUN_0060b449(local_160,s__X__X_006a979c,&local_170,&local_16c);
  local_16c = local_16c | local_170 << 8;
  if (local_16c != 0xf0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x175,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_005cd370(0x100);
  if (iVar2 == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x178,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_0060d260(local_100,s_DataSize_006b070c,8);
  if (iVar2 != 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x17b,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_0060b449(local_f8,&DAT_00690818,piVar3 + 1);
  if (iVar2 != 1) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x17e,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  if (0x100 < piVar3[1] + 1U) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x180,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_005cd370(0x100);
  if (iVar2 == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x183,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_0060d260(local_100,s_TimeKeys_006b0700,8);
  if (iVar2 != 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x186,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_0060b449(local_f8,&DAT_00690818,&local_168);
  if (iVar2 != 1) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x189,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_005de390();
  *piVar3 = iVar2;
  if (*piVar3 == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x18d,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  iVar2 = FUN_005cf3b0(piVar3[1]);
  piVar3[2] = iVar2;
  if (piVar3[2] == 0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x191,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  pcVar4 = (char *)FUN_005cf3b0(piVar3[1] + 1);
  if (pcVar4 == (char *)0x0) {
    FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x197,&DAT_006b3f70,
                 0);
    FUN_005d6ef0();
    return (int *)0x0;
  }
  do {
    if (local_168 < 1) {
      FUN_005cf400(pcVar4);
      _DAT_007203c0 = 0;
      return piVar3;
    }
    iVar2 = FUN_005cd370(0x40);
    if (iVar2 == 0) {
      FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x19d,
                   &DAT_006b3f70,0);
      FUN_005d6ef0();
      FUN_005cf400(pcVar4);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_0060b449(local_140,s__f__d_006b06f8,&local_164,&local_16c);
    if (iVar2 != 2) {
      FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x19f,
                   &DAT_006b3f70,0);
      FUN_005d6ef0();
      FUN_005cf400(pcVar4);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_005de570(local_164);
    if (iVar2 == 0) {
      FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1a1,
                   &DAT_006b3f70,0);
      FUN_005d6ef0();
      FUN_005cf400(pcVar4);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_005de6a0();
    *(uint *)(iVar2 + 4) = local_16c;
    iVar2 = FUN_005cd370(piVar3[1] + 1);
    if (iVar2 == 0) {
      FUN_005cf220(0x57,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b06c8,0x1a6,
                   &DAT_006b3f70,0);
      FUN_005d6ef0();
      FUN_005cf400(pcVar4);
      _DAT_007203c0 = 0;
      return (int *)0x0;
    }
    uVar5 = 0xffffffff;
    pcVar7 = pcVar4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar4[~uVar5 - 2] = '\0';
    uVar5 = 0xffffffff;
    pcVar7 = pcVar4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (pcVar4[~uVar5 - 2] == '\r') {
      pcVar4[~uVar5 - 2] = '\0';
    }
    uVar5 = 0xffffffff;
    pcVar7 = pcVar4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)(piVar3[2] + local_16c);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_168 = local_168 + -1;
  } while( true );
}

