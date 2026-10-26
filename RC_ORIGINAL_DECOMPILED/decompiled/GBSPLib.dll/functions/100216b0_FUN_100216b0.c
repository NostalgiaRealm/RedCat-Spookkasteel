/*
 * FUN_100216b0 at 100216b0
 * undefined FUN_100216b0(void)
 * Address ranges: 100216b0-10021c81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100216b0(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  code *pcVar4;
  int *piVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  code *local_c;
  uint *local_8;
  code *local_4;
  
  piVar5 = param_2;
  iVar11 = param_2[3];
  iVar7 = FUN_100203a0();
  if (iVar7 == 0) {
switchD_10021760_default:
    return 0;
  }
  local_c = *(code **)(iVar7 + 0x44);
  local_4 = *(code **)(iVar7 + 0x48);
  pcVar3 = *(code **)(iVar7 + 0x40);
  pcVar4 = *(code **)(iVar7 + 0x3c);
  if (param_3 == 0) {
    if (iVar11 == 5) {
      FUN_10021cb0(param_1,piVar5);
      return 1;
    }
    if (iVar11 == 7) {
      FUN_10021dc0(param_1,piVar5);
      return 1;
    }
    puVar13 = &DAT_104e9954;
  }
  else {
    puVar13 = &DAT_104e9d54;
  }
  param_3 = *piVar5;
  iVar11 = piVar5[1];
  iVar12 = piVar5[2] - param_3;
  if (piVar5[6] == 0) {
    local_18 = iVar11;
    switch(*(undefined4 *)(iVar7 + 0x30)) {
    case 1:
      iVar7 = param_3;
      if (iVar11 != 0) {
        do {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(byte *)param_1 = *(byte *)(puVar13 + (byte)*param_1);
            param_1 = (uint *)((int)param_1 + 1);
          }
          param_1 = (uint *)((int)param_1 + iVar12);
          iVar11 = iVar11 + -1;
          iVar7 = param_3;
        } while (iVar11 != 0);
        return 1;
      }
      break;
    case 2:
      local_14 = param_3;
      iVar7 = param_3;
      puVar14 = param_1;
      if (iVar11 != 0) {
        do {
          for (; local_14 != 0; local_14 = local_14 + -1) {
            (*pcVar3)((short)*puVar14,&param_2,&local_10,&param_1,&local_8);
            param_2 = (int *)puVar13[(int)param_2];
            local_10 = puVar13[local_10];
            param_1 = (uint *)puVar13[(int)param_1];
            uVar6 = (*pcVar4)(param_2,local_10,param_1,local_8);
            *(undefined2 *)puVar14 = uVar6;
            iVar7 = param_3;
            puVar14 = (uint *)((int)puVar14 + 2);
          }
          local_18 = local_18 + -1;
          local_14 = iVar7;
          puVar14 = (uint *)((int)puVar14 + iVar12 * 2);
        } while (local_18 != 0);
        return 1;
      }
      break;
    case 3:
      iVar7 = param_3;
      if (iVar11 != 0) {
        do {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            local_8 = param_1;
            (*local_c)(&local_8,&param_2,&local_10,&local_14,&local_1c);
            param_2 = (int *)puVar13[(int)param_2];
            local_10 = puVar13[local_10];
            local_14 = puVar13[local_14];
            (*local_4)(&param_1,param_2,local_10,local_14,local_1c);
          }
          param_1 = (uint *)((int)param_1 + iVar12 * 3);
          local_18 = local_18 + -1;
          iVar7 = param_3;
        } while (local_18 != 0);
        return 1;
      }
      break;
    case 4:
      iVar7 = param_3;
      puVar14 = param_1;
      while (local_18 = iVar11, local_14 = iVar7, iVar11 != 0) {
        for (; local_14 != 0; local_14 = local_14 + -1) {
          (*pcVar3)(*puVar14,&param_2,&local_10,&param_1,&local_4);
          param_2 = (int *)puVar13[(int)param_2];
          local_10 = puVar13[local_10];
          param_1 = (uint *)puVar13[(int)param_1];
          uVar8 = (*pcVar4)(param_2,local_10,param_1,local_4);
          *puVar14 = uVar8;
          puVar14 = puVar14 + 1;
          iVar7 = param_3;
        }
        puVar14 = puVar14 + iVar12;
        iVar11 = local_18 + -1;
      }
      break;
    default:
      goto switchD_10021760_default;
    }
  }
  else {
    switch(*(undefined4 *)(iVar7 + 0x30)) {
    case 1:
      bVar1 = *(byte *)(piVar5 + 7);
      iVar7 = param_3;
      puVar14 = param_1;
      param_1 = (uint *)iVar11;
      if (iVar11 != 0) {
        do {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            if ((byte)*puVar14 != bVar1) {
              bVar2 = *(byte *)(puVar13 + (byte)*puVar14);
              *(byte *)puVar14 = bVar2;
              if (bVar2 == bVar1) {
                *(byte *)puVar14 = bVar2 ^ 1;
              }
            }
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          param_1 = (uint *)((int)param_1 + -1);
          iVar7 = param_3;
          puVar14 = (uint *)((int)puVar14 + iVar12);
        } while (param_1 != (uint *)0x0);
        return 1;
      }
      break;
    case 2:
      puVar14 = (uint *)CONCAT22((short)((uint)piVar5 >> 0x10),(short)piVar5[7]);
      local_10 = iVar11;
      local_8 = puVar14;
      if (iVar11 != 0) {
        do {
          if (param_3 != 0) {
            local_14 = param_3;
            do {
              if ((short)*param_1 != (short)puVar14) {
                (*pcVar3)((short)*param_1,&param_2,&local_1c,&local_18,&local_c);
                param_2 = (int *)puVar13[(int)param_2];
                local_1c = puVar13[local_1c];
                local_18 = puVar13[local_18];
                uVar8 = (*pcVar4)(param_2,local_1c,local_18,local_c);
                if (uVar8 == ((uint)local_8 & 0xffff)) {
                  uVar8 = uVar8 ^ 1;
                }
                *(short *)param_1 = (short)uVar8;
                puVar14 = local_8;
              }
              param_1 = (uint *)((int)param_1 + 2);
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          param_1 = (uint *)((int)param_1 + iVar12 * 2);
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        return 1;
      }
      break;
    case 3:
      pcVar10 = (code *)param_2[7];
      local_1c = iVar11;
      local_c = pcVar10;
      if (iVar11 != 0) {
        do {
          if (param_3 != 0) {
            local_18 = param_3;
            do {
              pcVar9 = (code *)(((uint)(byte)*param_1 * 0x100 + (uint)*(byte *)((int)param_1 + 1)) *
                                0x100 + (uint)*(byte *)((int)param_1 + 2));
              if (pcVar9 != pcVar10) {
                (*pcVar3)(pcVar9,&param_2,&local_10,&local_14,&local_8);
                param_2 = (int *)puVar13[(int)param_2];
                local_10 = puVar13[local_10];
                local_14 = puVar13[local_14];
                pcVar10 = (code *)(*pcVar4)(param_2,local_10,local_14,local_8);
                if (pcVar10 == local_c) {
                  pcVar10 = (code *)((uint)pcVar10 ^ 1);
                }
                *(byte *)param_1 = (byte)((uint)pcVar10 >> 0x10);
                *(byte *)((int)param_1 + 1) = (byte)((uint)pcVar10 >> 8);
                *(byte *)((int)param_1 + 2) = (byte)pcVar10;
                pcVar10 = local_c;
              }
              param_1 = (uint *)((int)param_1 + 3);
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
          param_1 = (uint *)((int)param_1 + iVar12 * 3);
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        return 1;
      }
      break;
    case 4:
      pcVar10 = (code *)piVar5[7];
      local_1c = iVar11;
      local_c = pcVar10;
      if (iVar11 != 0) {
        do {
          if (param_3 != 0) {
            local_18 = param_3;
            do {
              if ((code *)*param_1 != pcVar10) {
                (*pcVar3)((code *)*param_1,&param_2,&local_10,&local_14,&local_8);
                param_2 = (int *)puVar13[(int)param_2];
                local_10 = puVar13[local_10];
                local_14 = puVar13[local_14];
                pcVar10 = (code *)(*pcVar4)(param_2,local_10,local_14,local_8);
                if (pcVar10 == local_c) {
                  pcVar10 = (code *)((uint)pcVar10 ^ 1);
                }
                *param_1 = (uint)pcVar10;
                pcVar10 = local_c;
              }
              param_1 = param_1 + 1;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
          param_1 = param_1 + iVar12;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        return 1;
      }
      break;
    default:
      goto switchD_10021760_default;
    }
  }
  return 1;
}

