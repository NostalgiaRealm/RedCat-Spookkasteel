/*
 * FUN_1001c240 at 1001c240
 * undefined FUN_1001c240(void)
 * Address ranges: 1001c240-1001ca83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1001c240(void)

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
  
  iVar2 = FUN_10014a00(4);
  if (iVar2 == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x148,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_10014310(0x14);
  if (piVar3 == (int *)0x0) {
    FUN_10015fb0(0x53,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x14f,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar3[2] = 0;
  *piVar3 = 0;
  if (local_170 != 0x56454b54) {
    if (local_170 == 0x42454b54) {
      iVar2 = FUN_10014a00(4);
      if (iVar2 == 0) {
        FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1bd,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
      if (local_170 != 0xf0) {
        FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1c3,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
      iVar2 = FUN_10014a00(4);
      if (iVar2 == 0) {
        FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1ca,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
      iVar2 = FUN_10014310(piVar3[1]);
      piVar3[2] = iVar2;
      if (piVar3[2] == 0) {
        FUN_10015fb0(0x53,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1d2,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
      iVar2 = FUN_10014a00(piVar3[1]);
      if (iVar2 == 0) {
        FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1d9,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
      iVar2 = FUN_10024bd0();
      *piVar3 = iVar2;
      if (*piVar3 == 0) {
        FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1e0,&DAT_10265ce0,0);
        FUN_1001c1e0();
        return (int *)0x0;
      }
    }
    return piVar3;
  }
  iVar2 = FUN_100149e0(0x20);
  if (iVar2 == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x16d,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  FUN_1002836b(local_160,s__X__X_1003a6b0,&local_170,&local_16c);
  local_16c = local_16c | local_170 << 8;
  if (local_16c != 0xf0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x174,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_100149e0(0x100);
  if (iVar2 == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x177,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_10033390(local_100,s_DataSize_1003c754,8);
  if (iVar2 != 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x17a,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_1002836b(local_f8,&DAT_1003a694,piVar3 + 1);
  if (iVar2 != 1) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x17d,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  if (0x100 < piVar3[1] + 1U) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x17f,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_100149e0(0x100);
  if (iVar2 == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x182,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_10033390(local_100,s_TimeKeys_1003c748,8);
  if (iVar2 != 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x185,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_1002836b(local_f8,&DAT_1003a694,&local_168);
  if (iVar2 != 1) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x188,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_10024b40();
  *piVar3 = iVar2;
  if (*piVar3 == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x18c,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  iVar2 = FUN_10014310(piVar3[1]);
  piVar3[2] = iVar2;
  if (piVar3[2] == 0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,400,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  pcVar4 = (char *)FUN_10014310(piVar3[1] + 1);
  if (pcVar4 == (char *)0x0) {
    FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x196,&DAT_10265ce0,0);
    FUN_1001c1e0();
    return (int *)0x0;
  }
  do {
    if (local_168 < 1) {
      FUN_10014360(pcVar4);
      _DAT_1003fde8 = 0;
      return piVar3;
    }
    iVar2 = FUN_100149e0(0x40);
    if (iVar2 == 0) {
      FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x19c,&DAT_10265ce0,0);
      FUN_1001c1e0();
      FUN_10014360(pcVar4);
      _DAT_1003fde8 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_1002836b(local_140,s__f__d_1003c740,&local_164,&local_16c);
    if (iVar2 != 2) {
      FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x19e,&DAT_10265ce0,0);
      FUN_1001c1e0();
      FUN_10014360(pcVar4);
      _DAT_1003fde8 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_10024db0(local_164);
    if (iVar2 == 0) {
      FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1a0,&DAT_10265ce0,0);
      FUN_1001c1e0();
      FUN_10014360(pcVar4);
      _DAT_1003fde8 = 0;
      return (int *)0x0;
    }
    iVar2 = FUN_10024ee0();
    *(uint *)(iVar2 + 4) = local_16c;
    iVar2 = FUN_100149e0(piVar3[1] + 1);
    if (iVar2 == 0) {
      FUN_10015fb0(0x57,&DAT_10265ce0,s___Actor_tkevents_c_1003c72c,0x1a5,&DAT_10265ce0,0);
      FUN_1001c1e0();
      FUN_10014360(pcVar4);
      _DAT_1003fde8 = 0;
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

