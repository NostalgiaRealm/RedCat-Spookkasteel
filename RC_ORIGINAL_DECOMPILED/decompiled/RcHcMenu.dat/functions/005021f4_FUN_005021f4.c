/*
 * FUN_005021f4 at 005021f4
 * undefined __register FUN_005021f4(int * param_1, uint * param_2)
 * Address ranges: 005021f4-0050234a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005021f4(int *param_1,uint *param_2)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar7;
  int extraout_EDX;
  int iVar8;
  int local_1c;
  uint local_18;
  short local_10;
  byte bStack_e;
  char cStack_d;
  
  cVar3 = (**(code **)(*param_1 + 0x4c))();
  uVar7 = extraout_ECX;
  if (((cVar3 != '\0') && (*(char *)((int)param_1 + 0x1f6) == '\0')) &&
     ((*param_2 == 0x100 || ((*param_2 == 0x101 || (*param_2 == 0x102)))))) {
    FUN_0050234c(param_1);
    bVar4 = FUN_004486a4(param_2[2]);
    sVar1 = (short)param_2[1];
    local_1c = FUN_004062a0(param_1[0x90]);
    uVar7 = extraout_ECX_00;
    if (-1 < local_1c) {
      local_1c = local_1c + 1;
      local_18 = 0;
      do {
        iVar8 = param_1[0x90];
        uVar6 = local_18;
        if (*(uint *)(iVar8 + -4) <= local_18) {
          uVar6 = thunk_FUN_00402874(local_18);
          uVar7 = extraout_ECX_01;
          iVar8 = extraout_EDX;
        }
        uVar2 = *(undefined4 *)(iVar8 + uVar6 * 4);
        local_10 = (short)uVar2;
        if ((((local_10 == sVar1) && (bStack_e = (byte)((uint)uVar2 >> 0x10), bVar4 == bStack_e)) &&
            ((cStack_d = (char)((uint)uVar2 >> 0x18), cStack_d != '\x01' ||
             (bVar5 = FUN_00501798((int)param_1), uVar7 = extraout_ECX_02, bVar5)))) &&
           ((cStack_d != '\x02' ||
            (bVar5 = FUN_00501798((int)param_1), uVar7 = extraout_ECX_03, !bVar5)))) {
          uVar6 = FUN_00433700(param_1[0x8e],*param_2,param_2[1],param_2[2]);
          param_2[3] = uVar6;
          return;
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if ((((char)param_1[0x91] != '\0') && (*param_2 == 0x100)) && ((sVar1 == 0x2e || (sVar1 == 8))))
    {
      *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) | 0x10;
    }
  }
  FUN_004361cc(param_1,param_2,uVar7);
  return;
}

