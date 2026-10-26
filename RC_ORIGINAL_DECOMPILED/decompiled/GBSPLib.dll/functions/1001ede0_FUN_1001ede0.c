/*
 * FUN_1001ede0 at 1001ede0
 * undefined FUN_1001ede0(void)
 * Address ranges: 1001ede0-1001f4c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001ede0(uint param_1,code *param_2,code *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  int local_28;
  undefined4 local_24;
  code *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = *(int *)((int)param_2 + 0xc);
  pcVar8 = *(code **)((int)param_2 + 4);
  local_28 = *(int *)((int)param_2 + 8) - (int)*(code **)param_2;
  local_24 = 0;
  param_2 = *(code **)param_2;
  iVar6 = FUN_100203d0();
  iVar7 = FUN_100203a0();
  uVar3 = param_1;
  pcVar9 = *(code **)(iVar7 + 0x40);
  local_10 = pcVar9;
  if (param_4 == 0) {
    switch(iVar6 + -1) {
    case 0:
      param_4 = 0;
      pbVar10 = (byte *)param_3;
      pcVar4 = param_2;
      pcVar5 = param_2;
      param_3 = pcVar8;
      if (pcVar8 == (code *)0x0) {
        return local_24;
      }
      do {
        for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
          (*pcVar9)(*pbVar10,&local_14,&local_18,&local_1c,local_8);
          FUN_1001f4f0(uVar3,local_14,local_18,local_1c,&local_24);
          pbVar10 = pbVar10 + 1;
          pcVar5 = param_2;
        }
        param_3 = param_3 + -1;
        pbVar10 = pbVar10 + local_28;
        pcVar4 = pcVar5;
      } while (param_3 != (code *)0x0);
      return local_24;
    case 1:
      param_4 = 0;
      pbVar10 = (byte *)param_3;
      pcVar4 = param_2;
      pcVar5 = param_2;
      param_3 = pcVar8;
      if (pcVar8 == (code *)0x0) {
        return local_24;
      }
      do {
        for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
          (*pcVar9)(*(undefined2 *)pbVar10,&local_c,&param_4,&param_1,local_4);
          FUN_1001f4f0(uVar3,local_c,param_4,param_1,&local_24);
          pbVar10 = pbVar10 + 2;
          pcVar5 = param_2;
        }
        param_3 = param_3 + -1;
        pbVar10 = pbVar10 + local_28 * 2;
        pcVar4 = pcVar5;
      } while (param_3 != (code *)0x0);
      return local_24;
    case 2:
      local_28 = local_28 * 3;
      if (iVar1 == 9) {
        pbVar10 = (byte *)param_3;
        pcVar4 = param_2;
        pcVar5 = pcVar8;
        if (pcVar8 != (code *)0x0) {
          do {
            for (; local_c = pcVar5, local_10 = pcVar9, pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1)
            {
              param_1 = (uint)*pbVar10;
              param_4 = (uint)pbVar10[1];
              local_20 = (code *)(uint)pbVar10[2];
              FUN_1001f4f0(uVar3,param_1,param_4,local_20,&local_24);
              pbVar10 = pbVar10 + 3;
              pcVar9 = local_10;
              pcVar5 = local_c;
            }
            pbVar10 = pbVar10 + local_28;
            pcVar4 = param_2;
            pcVar5 = local_c + -1;
          } while (local_c + -1 != (code *)0x0);
          local_c = (code *)0x0;
        }
      }
      else if (iVar1 == 10) {
        pbVar10 = (byte *)param_3;
        pcVar4 = pcVar8;
        if (pcVar8 != (code *)0x0) {
          do {
            local_10 = pcVar4;
            if (param_2 != (code *)0x0) {
              local_c = param_2;
              do {
                local_20 = (code *)(uint)*pbVar10;
                param_4 = (uint)pbVar10[1];
                param_1 = (uint)pbVar10[2];
                pbVar10 = pbVar10 + 3;
                FUN_1001f4f0(uVar3,param_1,param_4,local_20,&local_24);
                local_c = local_c + -1;
              } while (local_c != (code *)0x0);
            }
            pbVar10 = pbVar10 + local_28;
            pcVar4 = local_10 + -1;
          } while (local_10 + -1 != (code *)0x0);
          local_10 = (code *)0x0;
        }
      }
      else {
        pbVar10 = (byte *)param_3;
        pcVar4 = param_2;
        pcVar5 = pcVar8;
        if (pcVar8 != (code *)0x0) {
          do {
            for (; local_c = pcVar5, pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
              (*pcVar9)(((uint)*pbVar10 * 0x100 + (uint)pbVar10[1]) * 0x100 + (uint)pbVar10[2],
                        &param_1,&param_4,&local_20,local_4);
              FUN_1001f4f0(uVar3,param_1,param_4,local_20,&local_24);
              pbVar10 = pbVar10 + 3;
              pcVar5 = local_c;
            }
            pbVar10 = pbVar10 + local_28;
            pcVar4 = param_2;
            pcVar5 = local_c + -1;
          } while (local_c + -1 != (code *)0x0);
          local_c = (code *)0x0;
        }
      }
    case 3:
      pcVar4 = param_2;
      pbVar10 = (byte *)param_3;
      while (param_3 = pcVar8, pcVar5 = pcVar4, pcVar8 != (code *)0x0) {
        for (; pcVar5 != (code *)0x0; pcVar5 = pcVar5 + -1) {
          uVar2 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          (*pcVar9)(uVar2,&local_c,&param_4,&param_1,local_4);
          FUN_1001f4f0(uVar3,local_c,param_4,param_1,&local_24);
          pcVar4 = param_2;
        }
        pbVar10 = pbVar10 + local_28 * 4;
        pcVar8 = param_3 + -1;
      }
      return local_24;
    }
switchD_1001ee3f_default:
    return 0;
  }
  local_c = pcVar8;
  switch(iVar6 + -1) {
  case 0:
    pbVar10 = (byte *)param_3;
    pcVar4 = param_2;
    pcVar5 = param_2;
    param_3 = pcVar8;
    if (pcVar8 == (code *)0x0) {
      return local_24;
    }
    do {
      for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
        (*pcVar9)(*pbVar10,&local_14,&local_18,&local_1c,local_8);
        FUN_10027500(local_14,local_18,local_1c,&local_14,&local_18,&local_1c);
        FUN_1001f4f0(uVar3,local_14,local_18,local_1c,&local_24);
        pbVar10 = pbVar10 + 1;
        pcVar5 = param_2;
      }
      param_3 = param_3 + -1;
      pbVar10 = pbVar10 + local_28;
      pcVar4 = pcVar5;
    } while (param_3 != (code *)0x0);
    return local_24;
  case 1:
    pbVar10 = (byte *)param_3;
    pcVar4 = param_2;
    pcVar5 = param_2;
    local_20 = pcVar8;
    if (pcVar8 == (code *)0x0) {
      return local_24;
    }
    do {
      for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
        (*pcVar9)(*(undefined2 *)pbVar10,&param_4,&param_1,&param_3,&local_c);
        FUN_10027500(param_4,param_1,param_3,&param_4,&param_1,&param_3);
        FUN_1001f4f0(uVar3,param_4,param_1,param_3,&local_24);
        pbVar10 = pbVar10 + 2;
        pcVar5 = param_2;
      }
      local_20 = local_20 + -1;
      pbVar10 = pbVar10 + local_28 * 2;
      pcVar4 = pcVar5;
    } while (local_20 != (code *)0x0);
    return local_24;
  case 2:
    local_28 = local_28 * 3;
    if (iVar1 == 9) {
      pbVar10 = (byte *)param_3;
      pcVar4 = param_2;
      if (pcVar8 == (code *)0x0) goto LAB_1001f13a;
      do {
        for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
          FUN_10027430(pbVar10,&local_20,&param_4,&param_1);
          FUN_1001f4f0(uVar3,local_20,param_4,param_1,&local_24);
          pbVar10 = pbVar10 + 3;
        }
        local_c = local_c + -1;
        pbVar10 = pbVar10 + local_28;
        pcVar4 = param_2;
      } while (local_c != (code *)0x0);
    }
    else if (iVar1 == 10) {
      pbVar10 = (byte *)param_3;
      if (pcVar8 == (code *)0x0) goto LAB_1001f13a;
      do {
        if (param_2 != (code *)0x0) {
          local_10 = param_2;
          do {
            param_1 = (uint)*pbVar10;
            param_4 = (uint)pbVar10[1];
            local_20 = (code *)(uint)pbVar10[2];
            pbVar10 = pbVar10 + 3;
            FUN_10027500(local_20,param_4,param_1,&local_20,&param_4,&param_1);
            FUN_1001f4f0(uVar3,local_20,param_4,param_1,&local_24);
            local_10 = local_10 + -1;
          } while (local_10 != (code *)0x0);
        }
        local_c = local_c + -1;
        pbVar10 = pbVar10 + local_28;
      } while (local_c != (code *)0x0);
    }
    else {
      pbVar10 = (byte *)param_3;
      pcVar4 = param_2;
      pcVar5 = pcVar8;
      if (pcVar8 == (code *)0x0) goto LAB_1001f13a;
      do {
        for (; local_10 = pcVar5, pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
          (*pcVar9)(((uint)*pbVar10 * 0x100 + (uint)pbVar10[1]) * 0x100 + (uint)pbVar10[2],&local_20
                    ,&param_4,&param_1,local_4);
          FUN_10027500(local_20,param_4,param_1,&local_20,&param_4,&param_1);
          FUN_1001f4f0(uVar3,local_20,param_4,param_1,&local_24);
          pbVar10 = pbVar10 + 3;
          pcVar5 = local_10;
        }
        pbVar10 = pbVar10 + local_28;
        pcVar4 = param_2;
        pcVar5 = local_10 + -1;
      } while (local_10 + -1 != (code *)0x0);
      local_10 = (code *)0x0;
    }
switchD_1001ee3f_caseD_3:
LAB_1001f13a:
    pbVar10 = (byte *)param_3;
    pcVar4 = param_2;
    local_c = pcVar8;
    if (pcVar8 == (code *)0x0) {
      return local_24;
    }
    do {
      for (; pcVar4 != (code *)0x0; pcVar4 = pcVar4 + -1) {
        (*pcVar9)(*(undefined4 *)pbVar10,&param_4,&param_1,&param_3,local_4);
        FUN_10027500(param_4,param_1,param_3,&param_4,&param_1,&param_3);
        FUN_1001f4f0(uVar3,param_4,param_1,param_3,&local_24);
        pbVar10 = pbVar10 + 4;
      }
      local_c = local_c + -1;
      pbVar10 = pbVar10 + local_28 * 4;
      pcVar4 = param_2;
    } while (local_c != (code *)0x0);
    return local_24;
  case 3:
    goto switchD_1001ee3f_caseD_3;
  default:
    goto switchD_1001ee3f_default;
  }
}

