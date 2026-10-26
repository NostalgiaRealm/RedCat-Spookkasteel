/*
 * FUN_00536680 at 00536680
 * undefined FUN_00536680(void)
 * Address ranges: 00536680-00536a3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00536680(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b988;
  local_c = ExceptionList;
  local_30 = 2;
  local_2c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_0069ff74;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069ff74,~uVar4 - 1);
  local_4 = 0;
  iVar2 = FUN_005affe0(param_1,local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (iVar2 == 1) {
    local_30 = 1;
  }
  else {
    local_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_0069ff70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_0069ff70,~uVar4 - 1);
    local_4 = 1;
    iVar2 = FUN_005affe0(param_1,local_2c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if (iVar2 == 1) {
      local_30 = 0;
    }
    else {
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar9 = (char *)&DAT_0069ff78;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar7 = &DAT_0069ff78;
        puVar8 = local_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4 = 2;
      iVar2 = FUN_005affe0(param_1,local_2c);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      if (iVar2 == 1) {
        local_30 = 2;
      }
      else {
        local_2c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar9 = (char *)&DAT_0069ff6c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar1 = FUN_00401940(uVar4,1);
        if (cVar1 != '\0') {
          puVar7 = &DAT_0069ff6c;
          puVar8 = local_28;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          FUN_00404190(uVar4);
        }
        local_4 = 3;
        iVar2 = FUN_005affe0(param_1,local_2c);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        if (iVar2 == 1) {
          local_30 = 3;
        }
        else {
          local_2c[0] = (undefined1)param_1;
          FUN_004040a0(0);
          uVar4 = 0xffffffff;
          pcVar9 = (char *)&DAT_0069ff68;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4 - 1;
          cVar1 = FUN_00401940(uVar4,1);
          if (cVar1 != '\0') {
            puVar7 = &DAT_0069ff68;
            puVar8 = local_28;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            FUN_00404190(uVar4);
          }
          local_4 = 4;
          iVar2 = FUN_005affe0(param_1,local_2c);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
          if (iVar2 == 1) {
            local_30 = 4;
          }
          else {
            local_2c[0] = (undefined1)param_1;
            FUN_004040a0(0);
            uVar4 = 0xffffffff;
            pcVar9 = (char *)&DAT_0069ff64;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4 - 1;
            cVar1 = FUN_00401940(uVar4,1);
            if (cVar1 != '\0') {
              puVar7 = &DAT_0069ff64;
              for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *local_28 = *puVar7;
                puVar7 = puVar7 + 1;
                local_28 = local_28 + 1;
              }
              for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)local_28 = *(undefined1 *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                local_28 = (undefined4 *)((int)local_28 + 1);
              }
              FUN_00404190(uVar4);
            }
            local_4 = 5;
            iVar2 = FUN_005affe0(param_1,local_2c);
            local_4 = 0xffffffff;
            FUN_004040a0(1);
            if (iVar2 == 1) {
              local_30 = 5;
            }
            else {
              if (DAT_006b915c == 0) {
                FUN_004bc480();
              }
              puVar6 = *(undefined1 **)(param_1 + 4);
              if (puVar6 == (undefined1 *)0x0) {
                puVar6 = &DAT_0064a3b4;
              }
              uVar3 = FUN_005ae390(local_1c,s_Unknown_language___s___Using_def_0069feb8,puVar6);
              local_4 = 6;
              FUN_004c43b0(uVar3);
              if (local_18 != 0) {
                cVar1 = *(char *)(local_18 + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0((char *)(local_18 + -1));
                }
                else {
                  *(char *)(local_18 + -1) = cVar1 + -1;
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return local_30;
}

