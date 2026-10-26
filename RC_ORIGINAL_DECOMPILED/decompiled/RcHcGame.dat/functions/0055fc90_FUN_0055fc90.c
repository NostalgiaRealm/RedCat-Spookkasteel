/*
 * FUN_0055fc90 at 0055fc90
 * undefined FUN_0055fc90(void)
 * Address ranges: 0055fc90-005600be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055fc90(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  undefined1 local_6c [4];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f990;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0xffffffff;
  uVar6 = 0;
  if (DAT_006c8d98 != 0) {
    puVar7 = &DAT_006ba8f4;
    do {
      if ((char)puVar7[0x29a] == '\0') {
        if (*puVar7 < 2) {
          iVar2 = FUN_00517430();
          iVar4 = *(int *)(iVar2 + 100);
          if (iVar4 == -0x80000000) {
            puVar3 = *(undefined1 **)(iVar2 + 0x18);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0064a3b4;
            }
            iVar4 = FUN_0060af10(puVar3);
            *(int *)(iVar2 + 100) = iVar4;
          }
          if (iVar4 != 0) {
            uVar5 = FUN_005ae390(local_2c,s_CAdamEngine__AutoSelectBestDrive_006a3528,uVar6,
                                 puVar7 + -0x42,*puVar7);
            local_4 = 1;
            FUN_005aff00(uVar5);
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
        }
        else if (*param_1 == 0xffffffff) {
          iVar2 = FUN_00517430();
          iVar4 = *(int *)(iVar2 + 100);
          if (iVar4 == -0x80000000) {
            puVar3 = *(undefined1 **)(iVar2 + 0x18);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0064a3b4;
            }
            iVar4 = FUN_0060af10(puVar3);
            *(int *)(iVar2 + 100) = iVar4;
          }
          if (iVar4 != 0) {
            uVar5 = FUN_005ae390(local_1c,s_CAdamEngine__AutoSelectBestDrive_006a34c4,uVar6,
                                 puVar7 + -0x42);
            local_4 = 2;
            FUN_005aff00(uVar5);
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
          *param_1 = uVar6;
        }
        else {
          iVar4 = *param_1 * 0xb7c;
          if (((&DAT_006bb35d)[iVar4] == '\0') || (*(char *)((int)puVar7 + 0xa69) != '\0')) {
            if (((&DAT_006bb360)[iVar4] != '\0') &&
               (((((char)puVar7[0x29b] != '\0' &&
                  ((&DAT_006bb35e)[iVar4] == *(char *)((int)puVar7 + 0xa6a))) &&
                 ((&DAT_006bb361)[iVar4] != '\0')) && (*(char *)((int)puVar7 + 0xa6d) == '\0')))) {
              iVar2 = FUN_00517430();
              iVar4 = *(int *)(iVar2 + 100);
              if (iVar4 == -0x80000000) {
                puVar3 = *(undefined1 **)(iVar2 + 0x18);
                if (puVar3 == (undefined1 *)0x0) {
                  puVar3 = &DAT_0064a3b4;
                }
                iVar4 = FUN_0060af10(puVar3);
                *(int *)(iVar2 + 100) = iVar4;
              }
              if (iVar4 != 0) {
                uVar5 = FUN_005ae390(local_4c,s_CAdamEngine__AutoSelectBestDrive_006a33f4,uVar6,
                                     puVar7 + -0x42);
                local_4 = 4;
                FUN_005aff00(uVar5);
                local_4 = 0xffffffff;
                if (local_48 != 0) {
                  cVar1 = *(char *)(local_48 + -1);
                  if ((cVar1 == '\0') || (cVar1 == -1)) {
                    FUN_005fe5f0((char *)(local_48 + -1));
                  }
                  else {
                    *(char *)(local_48 + -1) = cVar1 + -1;
                  }
                }
                local_48 = 0;
                local_44 = 0;
                local_40 = 0;
              }
              *param_1 = uVar6;
            }
          }
          else {
            iVar2 = FUN_00517430();
            iVar4 = *(int *)(iVar2 + 100);
            if (iVar4 == -0x80000000) {
              puVar3 = *(undefined1 **)(iVar2 + 0x18);
              if (puVar3 == (undefined1 *)0x0) {
                puVar3 = &DAT_0064a3b4;
              }
              iVar4 = FUN_0060af10(puVar3);
              *(int *)(iVar2 + 100) = iVar4;
            }
            if (iVar4 != 0) {
              uVar5 = FUN_005ae390(local_5c,s_CAdamEngine__AutoSelectBestDrive_006a345c,uVar6,
                                   puVar7 + -0x42);
              local_4 = 3;
              FUN_005aff00(uVar5);
              local_4 = 0xffffffff;
              if (local_58 != 0) {
                cVar1 = *(char *)(local_58 + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0((char *)(local_58 + -1));
                }
                else {
                  *(char *)(local_58 + -1) = cVar1 + -1;
                }
              }
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
            }
            *param_1 = uVar6;
          }
        }
      }
      else {
        iVar2 = FUN_00517430();
        iVar4 = *(int *)(iVar2 + 100);
        if (iVar4 == -0x80000000) {
          puVar3 = *(undefined1 **)(iVar2 + 0x18);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          iVar4 = FUN_0060af10(puVar3);
          *(int *)(iVar2 + 100) = iVar4;
        }
        if (iVar4 != 0) {
          uVar5 = FUN_005ae390(local_3c,s_CAdamEngine__AutoSelectBestDrive_006a3588,uVar6,
                               puVar7 + -0x42);
          local_4 = 0;
          FUN_005aff00(uVar5);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0x2df;
    } while (uVar6 < DAT_006c8d98);
  }
  if (*param_1 != 0xffffffff) {
    ExceptionList = local_c;
    return 1;
  }
  local_6c[0] = param_1._0_1_;
  uVar6 = 0xffffffff;
  local_68 = 0;
  pcVar8 = s_CAdamEngine__AutoSelectBestDrive_006a33bc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_64 = 0;
  local_60 = 0;
  FUN_004040f0(s_CAdamEngine__AutoSelectBestDrive_006a33bc,~uVar6 - 1);
  local_4 = 5;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x430,local_6c);
  if (local_68 != 0) {
    cVar1 = *(char *)(local_68 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_68 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return 0;
    }
    FUN_005fe5f0((char *)(local_68 + -1));
  }
  ExceptionList = local_c;
  return 0;
}

