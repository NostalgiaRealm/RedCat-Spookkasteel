/*
 * FUN_005d4150 at 005d4150
 * undefined FUN_005d4150(void)
 * Address ranges: 005d4150-005d4653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d4150(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  int local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int *local_40;
  int local_3c;
  undefined1 local_38 [20];
  uint local_24;
  int local_20;
  uint local_1c;
  
  if (*(int *)(param_2 + 0xdc) == 0) {
    return 1;
  }
  puVar5 = (undefined4 *)FUN_005cf3b0(*(int *)(param_2 + 0xdc));
  if (puVar5 == (undefined4 *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0xde,
                 &DAT_006b3f70,0);
  }
  else {
    uVar11 = *(uint *)(param_2 + 0xdc);
    puVar7 = puVar5;
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar12 = 0;
    if (0 < *(int *)(param_2 + 0xc0)) {
      piVar13 = (int *)(*(int *)(param_2 + 0x68) + 0x10);
      do {
        iVar6 = *piVar13 * 0x40 + *(int *)(param_2 + 0x88);
        if ((*(byte *)(iVar6 + 0x28) & 0x10) != 0) {
          *(undefined1 *)(*(int *)(iVar6 + 0x3c) + (int)puVar5) = 1;
        }
        iVar12 = iVar12 + 1;
        piVar13 = piVar13 + 9;
      } while (iVar12 < *(int *)(param_2 + 0xc0));
    }
    puVar7 = (undefined4 *)FUN_005cf3b0(*(int *)(param_2 + 0xdc) * 0x4c);
    param_1[1] = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      for (uVar11 = *(int *)(param_2 + 0xdc) * 0x13 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1)
      {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      pcVar15 = (char *)param_1[1];
      *param_1 = *(undefined4 *)(param_2 + 0xdc);
      pcVar14 = *(char **)(param_2 + 0x84);
      local_60 = 0;
      if (*(int *)(param_2 + 0xdc) < 1) {
        return 1;
      }
      do {
        if (*(char *)(local_60 + (int)puVar5) == '\0') {
          local_50 = 0;
        }
        else {
          local_50 = 0xff;
        }
        uVar11 = 0xffffffff;
        pcVar16 = pcVar14;
        do {
          pcVar18 = pcVar16;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar18 = pcVar16 + 1;
          cVar3 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar3 != '\0');
        uVar11 = ~uVar11;
        pcVar16 = pcVar18 + -uVar11;
        pcVar18 = pcVar15;
        for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar18 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar18 = pcVar18 + 1;
        }
        iVar12 = FUN_005c01d0((-(uint)((*(uint *)(pcVar14 + 0x20) & 1) != 0) & 0xfffffffd) + 4,1);
        *(int *)(pcVar15 + 0x40) = iVar12;
        if (iVar12 == 0) {
          uVar20 = 0x129;
LAB_005d4605:
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,uVar20,
                       &DAT_006b3f70,0);
          goto LAB_005d461d;
        }
        FUN_005c1be0();
        iVar12 = FUN_005c0530(0,0);
        if (iVar12 == 0) {
          uVar20 = 0x13c;
          goto LAB_005d4605;
        }
        local_54 = 0;
        puVar7 = (undefined4 *)(*(int *)(pcVar14 + 0x2c) + *(int *)(param_2 + 0x8c));
        do {
          iVar12 = FUN_005c3350(0);
          if (iVar12 == 0) {
            uVar20 = 0x14b;
            goto LAB_005d4605;
          }
          puVar8 = (undefined4 *)FUN_005c0d90();
          if (local_1c == local_24) {
            puVar17 = puVar7;
            for (uVar11 = local_20 * local_24 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar8 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar11 = local_20 * local_24 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
          }
          else if (local_20 != 0) {
            local_58 = local_20;
            do {
              puVar17 = puVar7;
              puVar19 = puVar8;
              for (uVar11 = local_24 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
              }
              puVar7 = (undefined4 *)((int)puVar7 + local_24);
              for (uVar11 = local_24 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
              puVar8 = (undefined4 *)((int)puVar8 + local_1c);
              local_58 = local_58 + -1;
            } while (local_58 != 0);
          }
          iVar12 = FUN_005c0d70();
          if (iVar12 == 0) {
            uVar20 = 0x16a;
            goto LAB_005d4605;
          }
          local_54 = local_54 + 1;
        } while (local_54 < 1);
        iVar12 = FUN_005c4aa0();
        if (iVar12 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x17c,
                       &DAT_006b3f70,0);
          return 0;
        }
        iVar12 = FUN_005c4d80(local_38,&local_3c);
        if (iVar12 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x182,
                       &DAT_006b3f70,0);
          return 0;
        }
        pbVar9 = (byte *)(*(int *)(pcVar14 + 0x30) * 0x300 + *(int *)(param_2 + 0x90));
        piVar13 = local_40;
        for (iVar12 = local_3c; iVar12 != 0; iVar12 = iVar12 + -1) {
          bVar4 = *pbVar9;
          pbVar1 = pbVar9 + 1;
          pbVar2 = pbVar9 + 2;
          pbVar9 = pbVar9 + 3;
          *piVar13 = ((bVar4 + 0xff00) * 0x100 + (uint)*pbVar1) * 0x100 + (uint)*pbVar2;
          piVar13 = piVar13 + 1;
        }
        iVar12 = FUN_005c4e50();
        if (iVar12 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x198,
                       &DAT_006b3f70,0);
          return 0;
        }
        iVar12 = FUN_005c3fa0();
        if (iVar12 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0x19e,
                       &DAT_006b3f70,0);
          return 0;
        }
        FUN_005c4d10();
        iVar12 = FUN_005c3cf0(local_50,1);
        if (iVar12 == 0) {
          uVar20 = 0x1a7;
          goto LAB_005d4605;
        }
        local_60 = local_60 + 1;
        pcVar14 = pcVar14 + 0x34;
        pcVar15 = pcVar15 + 0x4c;
        if (*(int *)(param_2 + 0xdc) <= local_60) {
          return 1;
        }
      } while( true );
    }
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac574,0xf9,
                 &DAT_006b3f70,0);
  }
LAB_005d461d:
  if (param_1[1] != 0) {
    FUN_005d4660(param_1);
    param_1[1] = 0;
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_005cf400(puVar5);
    _DAT_007203c0 = 0;
  }
  return 0;
}

