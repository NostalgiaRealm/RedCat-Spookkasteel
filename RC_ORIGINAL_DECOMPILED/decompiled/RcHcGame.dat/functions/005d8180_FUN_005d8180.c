/*
 * FUN_005d8180 at 005d8180
 * undefined FUN_005d8180(void)
 * Address ranges: 005d8180-005d8865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d8180(uint param_1,int *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = param_2[3];
  iVar8 = param_2[1];
  iVar5 = param_2[2] - *param_2;
  local_1c = 0;
  param_2 = (int *)*param_2;
  iVar6 = FUN_005c6a70();
  iVar7 = FUN_005c6a40();
  uVar4 = param_1;
  pcVar2 = *(code **)(iVar7 + 0x40);
  if (param_4 == 0) {
    switch(iVar6 + -1) {
    case 0:
      param_4 = 0;
      pbVar9 = param_3;
      iVar1 = (int)param_2;
      param_3 = (byte *)iVar8;
      if (iVar8 != 0) {
        do {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pcVar2)(*pbVar9,&local_10,&local_14,&local_18,local_8);
            FUN_005d8890(uVar4,local_10,local_14,local_18,&local_1c);
            pbVar9 = pbVar9 + 1;
          }
          param_3 = (byte *)((int)param_3 + -1);
          pbVar9 = pbVar9 + iVar5;
          iVar1 = (int)param_2;
        } while (param_3 != (byte *)0x0);
        return local_1c;
      }
      break;
    case 1:
      param_4 = 0;
      pbVar9 = param_3;
      iVar1 = (int)param_2;
      param_3 = (byte *)iVar8;
      if (iVar8 != 0) {
        do {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pcVar2)(*(undefined2 *)pbVar9,&local_c,&param_4,&param_1,local_4);
            FUN_005d8890(uVar4,local_c,param_4,param_1,&local_1c);
            pbVar9 = pbVar9 + 2;
          }
          param_3 = (byte *)((int)param_3 + -1);
          pbVar9 = pbVar9 + iVar5 * 2;
          iVar1 = (int)param_2;
        } while (param_3 != (byte *)0x0);
        return local_1c;
      }
      break;
    case 2:
      iVar5 = iVar5 * 3;
      if (iVar1 == 9) {
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        local_c = iVar8;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              param_1 = (uint)*pbVar9;
              param_3 = (byte *)(uint)pbVar9[1];
              param_4 = (uint)pbVar9[2];
              FUN_005d8890(uVar4,param_1,param_3,param_4,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            local_c = local_c + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (local_c != 0);
          return local_1c;
        }
      }
      else if (iVar1 == 10) {
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        local_c = iVar8;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              param_4 = (uint)*pbVar9;
              param_3 = (byte *)(uint)pbVar9[1];
              param_1 = (uint)pbVar9[2];
              FUN_005d8890(uVar4,param_1,param_3,param_4,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            local_c = local_c + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (local_c != 0);
          return local_1c;
        }
      }
      else {
        param_4 = 0;
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        local_c = iVar8;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              (*pcVar2)(((uint)*pbVar9 * 0x100 + (uint)pbVar9[1]) * 0x100 + (uint)pbVar9[2],&param_1
                        ,&param_3,&param_4,local_4);
              FUN_005d8890(uVar4,param_1,param_3,param_4,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            local_c = local_c + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (local_c != 0);
          return local_1c;
        }
      }
      break;
    case 3:
      param_4 = 0;
      pbVar9 = param_3;
      while (param_3 = (byte *)iVar8, iVar1 = (int)param_2, iVar8 != 0) {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          uVar3 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          (*pcVar2)(uVar3,&local_c,&param_4,&param_1,local_4);
          FUN_005d8890(uVar4,local_c,param_4,param_1,&local_1c);
        }
        pbVar9 = pbVar9 + iVar5 * 4;
        iVar8 = (int)param_3 + -1;
      }
      break;
    default:
      goto switchD_005d81d3_default;
    }
  }
  else {
    switch(iVar6 + -1) {
    case 0:
      pbVar9 = param_3;
      iVar1 = (int)param_2;
      param_3 = (byte *)iVar8;
      if (iVar8 != 0) {
        do {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pcVar2)(*pbVar9,&local_10,&local_14,&local_18,local_8);
            FUN_005e1300(local_10,local_14,local_18,&local_10,&local_14,&local_18);
            FUN_005d8890(uVar4,local_10,local_14,local_18,&local_1c);
            pbVar9 = pbVar9 + 1;
          }
          param_3 = (byte *)((int)param_3 + -1);
          pbVar9 = pbVar9 + iVar5;
          iVar1 = (int)param_2;
        } while (param_3 != (byte *)0x0);
        return local_1c;
      }
      break;
    case 1:
      pbVar9 = param_3;
      iVar1 = (int)param_2;
      local_c = iVar8;
      if (iVar8 != 0) {
        do {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pcVar2)(*(undefined2 *)pbVar9,&param_4,&param_3,&param_1,local_4);
            FUN_005e1300(param_4,param_3,param_1,&param_4,&param_3,&param_1);
            FUN_005d8890(uVar4,param_4,param_3,param_1,&local_1c);
            pbVar9 = pbVar9 + 2;
          }
          local_c = local_c + -1;
          pbVar9 = pbVar9 + iVar5 * 2;
          iVar1 = (int)param_2;
        } while (local_c != 0);
        return local_1c;
      }
      break;
    case 2:
      iVar5 = iVar5 * 3;
      if (iVar1 == 9) {
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              FUN_005e1230(pbVar9,&param_4,&param_3,&param_1);
              FUN_005d8890(uVar4,param_4,param_3,param_1,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            iVar8 = iVar8 + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (iVar8 != 0);
          return local_1c;
        }
      }
      else if (iVar1 == 10) {
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        local_c = iVar8;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              param_1 = (uint)*pbVar9;
              param_3 = (byte *)(uint)pbVar9[1];
              param_4 = (uint)pbVar9[2];
              FUN_005e1300(param_4,param_3,param_1,&param_4,&param_3,&param_1);
              FUN_005d8890(uVar4,param_4,param_3,param_1,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            local_c = local_c + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (local_c != 0);
          return local_1c;
        }
      }
      else {
        pbVar9 = param_3;
        iVar1 = (int)param_2;
        local_c = iVar8;
        if (iVar8 != 0) {
          do {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              (*pcVar2)(((uint)*pbVar9 * 0x100 + (uint)pbVar9[1]) * 0x100 + (uint)pbVar9[2],&param_4
                        ,&param_3,&param_1,local_4);
              FUN_005e1300(param_4,param_3,param_1,&param_4,&param_3,&param_1);
              FUN_005d8890(uVar4,param_4,param_3,param_1,&local_1c);
              pbVar9 = pbVar9 + 3;
            }
            local_c = local_c + -1;
            pbVar9 = pbVar9 + iVar5;
            iVar1 = (int)param_2;
          } while (local_c != 0);
          return local_1c;
        }
      }
      break;
    case 3:
      pbVar9 = param_3;
      iVar1 = (int)param_2;
      local_c = iVar8;
      if (iVar8 != 0) {
        do {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pcVar2)(*(undefined4 *)pbVar9,&param_4,&param_3,&param_1,local_4);
            FUN_005e1300(param_4,param_3,param_1,&param_4,&param_3,&param_1);
            FUN_005d8890(uVar4,param_4,param_3,param_1,&local_1c);
            pbVar9 = pbVar9 + 4;
          }
          local_c = local_c + -1;
          pbVar9 = pbVar9 + iVar5 * 4;
          iVar1 = (int)param_2;
        } while (local_c != 0);
        return local_1c;
      }
      break;
    default:
switchD_005d81d3_default:
      return 0;
    }
  }
  return local_1c;
}

