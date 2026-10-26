/*
 * FUN_005c96d0 at 005c96d0
 * undefined FUN_005c96d0(void)
 * Address ranges: 005c96d0-005c99ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005c96d0(undefined4 param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined1 local_400 [1024];
  
  if (((param_4 ^ 0x10003) & 0xffff0000) != 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0xfb,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  if (0x10003 < param_4) {
    FUN_0060d588(local_400,s__d____d_006aa3ec,param_4,0x10003);
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x103,
                 &DAT_006b3f70,local_400);
    return (undefined4 *)0x0;
  }
  if (param_4 < 0x10003) {
    FUN_0060d588(local_400,s__d____d_006aa3ec,param_4,0x10003);
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x10b,
                 &DAT_006b3f70,local_400);
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_005cf3b0(0x390d8);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x114,&DAT_006b3f70,
                 0);
    return (undefined4 *)0x0;
  }
  puVar10 = puVar2;
  for (iVar4 = 0xe436; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar4 = FUN_005d5cb0();
  if (iVar4 == 0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x11d,&DAT_006b3f70,
                 0);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar3 = param_3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = (char *)FUN_005cf3b0(uVar5);
    puVar2[0xe415] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      pcVar8 = param_3;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar3 = pcVar3 + 1;
      }
      puVar2[0xd3b3] = param_1;
      uVar5 = 0xffffffff;
      do {
        pcVar3 = param_2;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar3 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar3;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar3 + -uVar5;
      pcVar8 = (char *)(puVar2 + 0xd3b4);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      iVar4 = FUN_005c9a20(puVar2 + 0xcd9f);
      if (iVar4 != 0) {
        iVar4 = 0;
        psVar9 = (short *)(puVar2 + 0xd3e6);
        do {
          iVar7 = iVar4 % 200;
          iVar4 = iVar4 + 0x41;
          *psVar9 = (short)iVar7 + 0x32;
          psVar9 = psVar9 + 1;
        } while (iVar4 < 0x514);
        iVar4 = FUN_005c9a70(puVar2,param_3);
        if ((((iVar4 != 0) && (iVar4 = FUN_005bb7f0(puVar2), iVar4 != 0)) &&
            (iVar4 = FUN_005d1ef0(puVar2), iVar4 != 0)) &&
           ((iVar4 = FUN_005b5ff0(puVar2), iVar4 != 0 && (iVar4 = FUN_005bc220(puVar2), iVar4 != 0))
           )) {
          puVar2[0xe413] = 1;
          puVar2[0xe414] = 1;
          FUN_005de6c0(FUN_005bb9e0,puVar2);
          puVar2[0xe42c] = 0x3f800000;
          DAT_006a9568 = 0;
          FUN_005bb600(puVar2,0,0,0,0,0,0);
          DAT_006a9568 = 1;
          return puVar2;
        }
      }
    }
  }
  if (puVar2[0xe415] != 0) {
    FUN_005cf400(puVar2[0xe415]);
    puVar2[0xe415] = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(puVar2);
  _DAT_007203c0 = 0;
  return (undefined4 *)0x0;
}

