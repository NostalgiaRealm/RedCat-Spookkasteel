/*
 * FUN_0059f5d0 at 0059f5d0
 * undefined FUN_0059f5d0(void)
 * Address ranges: 0059f5d0-0059fa59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059f5d0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_104;
  char *local_f0;
  int local_dc [2];
  int local_d4;
  int local_d0;
  byte local_cc [32];
  undefined1 local_ac [4];
  int local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  char local_88 [116];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644c31;
  local_c = ExceptionList;
  bVar11 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_0060d46b();
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = FUN_0060d363(local_dc);
  if (iVar3 == 1) {
    pcVar12 = s_Amsterdoom_WPS_file_version_7_006a76ec;
    pbVar4 = local_cc;
    do {
      bVar1 = *pbVar4;
      bVar14 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_0059f675:
        iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_0059f67a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar14 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_0059f675;
      pbVar4 = pbVar4 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0059f67a:
    if (iVar3 != 0) goto LAB_0059f798;
    FUN_00457240();
    iVar3 = FUN_0041e8e0();
    if (local_d4 == iVar3) {
      iVar3 = FUN_0059ff00();
      if (local_d0 == iVar3) {
        local_104 = 0;
        if (0 < local_dc[0]) {
          do {
            iVar3 = FUN_0060d363(&local_9c);
            if (iVar3 != 1) goto LAB_0059f7d2;
            pvVar7 = operator_new(0xac);
            local_4 = 1;
            if (pvVar7 != (void *)0x0) {
              local_f0 = (char *)0x0;
              uVar9 = 0xffffffff;
              pcVar12 = local_88;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar2 != '\0');
              cVar2 = FUN_00401940();
              if (cVar2 != '\0') {
                pcVar12 = local_88;
                pcVar13 = local_f0;
                for (uVar10 = ~uVar9 - 1 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                  pcVar12 = pcVar12 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar9 = ~uVar9 - 1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pcVar13 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                FUN_00404190();
              }
              bVar11 = true;
              local_4 = CONCAT31(local_4._1_3_,2);
              FUN_0059b1d0();
              local_4 = 2;
              uVar6 = local_9c;
              uVar15 = local_98;
              uVar16 = local_94;
              uVar8 = FUN_004fcb90(local_9c,local_98,local_94);
              FUN_00597c00(uVar8,uVar6,uVar15,uVar16);
            }
            local_4 = 0xffffffff;
            if (bVar11) {
              bVar11 = false;
              if (local_f0 != (char *)0x0) {
                cVar2 = local_f0[-1];
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  FUN_005fe5f0();
                }
                else {
                  local_f0[-1] = cVar2 + -1;
                }
              }
              local_f0 = (char *)0x0;
            }
            FUN_0059c350();
            iVar3 = 0;
            do {
              FUN_0059b1d0();
              FUN_00598410();
              iVar3 = iVar3 + 1;
            } while (iVar3 < 8);
            iVar3 = 4;
            do {
              FUN_0059b1d0();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            FUN_00599540();
            if (-1 < local_14) {
              FUN_00457240();
              iVar3 = FUN_0041e8e0();
              if (local_14 < iVar3) {
                FUN_00457240(param_2);
                FUN_004fe360();
              }
            }
            FUN_005995f0();
            FUN_0059a6f0();
            local_104 = local_104 + 1;
          } while (local_104 < local_dc[0]);
        }
        FUN_0060d30d();
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = FUN_005195f0();
      iVar3 = *(int *)(iVar5 + 100);
      if (iVar3 == -0x80000000) {
        iVar3 = FUN_0060af10();
        *(int *)(iVar5 + 100) = iVar3;
      }
      if (iVar3 != 0) {
        uVar6 = FUN_005ae390(local_ac);
        local_4 = 0;
        FUN_005aff00(uVar6);
        if (local_a8 != 0) {
          cVar2 = *(char *)(local_a8 + -1);
          if ((cVar2 != '\0') && (cVar2 != -1)) {
            *(char *)(local_a8 + -1) = cVar2 + -1;
            FUN_0060d30d();
            ExceptionList = local_c;
            return 0;
          }
          FUN_005fe5f0();
          FUN_0060d30d();
          ExceptionList = local_c;
          return 0;
        }
      }
      goto LAB_0059f7d2;
    }
    iVar5 = FUN_005195f0();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      iVar3 = FUN_0060af10();
      *(int *)(iVar5 + 100) = iVar3;
    }
  }
  else {
LAB_0059f798:
    iVar5 = FUN_005195f0();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      iVar3 = FUN_0060af10();
      *(int *)(iVar5 + 100) = iVar3;
    }
  }
  if (iVar3 != 0) {
    FUN_005afe30();
  }
LAB_0059f7d2:
  FUN_0060d30d();
  ExceptionList = local_c;
  return 0;
}

