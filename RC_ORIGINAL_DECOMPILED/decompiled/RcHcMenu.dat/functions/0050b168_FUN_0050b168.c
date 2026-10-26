/*
 * FUN_0050b168 at 0050b168
 * undefined __register FUN_0050b168(int * param_1, short * param_2, byte param_3)
 * Address ranges: 0050b168-0050b389
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050b168(int *param_1,short *param_2,byte param_3)

{
  short sVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  float10 in_ST0;
  float10 in_ST1;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  byte local_d;
  short *local_c;
  int *local_8;
  
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar5 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00509aec);
  dVar3 = *(double *)(iVar5 + 0x10);
  dVar2 = *(double *)(iVar5 + 0x10);
  cVar4 = (**(code **)(*local_8 + 0x4c))();
  uVar7 = extraout_ECX;
  if ((cVar4 != '\0') && (*(char *)((int)local_8 + 0x1f6) == '\0')) {
    sVar1 = *local_c;
    if (sVar1 == 0x21) {
      FUN_0050b390((int)local_8);
      FUN_0040b090((short *)&local_14,&local_12,(short *)&local_10,SUB84((double)in_ST0,0),
                   (int)((ulonglong)(double)in_ST0 >> 0x20));
      if ((local_d & 4) == 0) {
        uVar6 = local_12 - 1;
        if (SBORROW4((uint)local_12,1)) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        if (0xffff < uVar6) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        local_12 = (ushort)uVar6;
        if (local_12 == 0) {
          local_12 = 0xc;
          uVar6 = local_14 - 1;
          if (SBORROW4((uint)local_14,1)) {
            uVar6 = thunk_FUN_00402874(uVar6);
          }
          if (0xffff < uVar6) {
            uVar6 = thunk_FUN_00402874(uVar6);
          }
          local_14 = (ushort)uVar6;
        }
      }
      else {
        uVar6 = local_14 - 1;
        if (SBORROW4((uint)local_14,1)) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        if (0xffff < uVar6) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        local_14 = (ushort)uVar6;
      }
      FUN_0050b084(local_14,local_12,local_10);
      FUN_0050b3c0(local_8,extraout_EDX_01,puVar9,SUB84((double)in_ST1,0),
                   (int)((ulonglong)(double)in_ST1 >> 0x20));
      uVar7 = extraout_ECX_03;
    }
    else if (sVar1 == 0x22) {
      FUN_0050b390((int)local_8);
      FUN_0040b090((short *)&local_14,&local_12,(short *)&local_10,SUB84((double)in_ST0,0),
                   (int)((ulonglong)(double)in_ST0 >> 0x20));
      if ((local_d & 4) == 0) {
        uVar6 = local_12 + 1;
        if (SCARRY4((uint)local_12,1)) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        if (0xffff < uVar6) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        local_12 = (ushort)uVar6;
        if (0xc < local_12) {
          local_12 = 1;
          uVar6 = local_14 + 1;
          if (SCARRY4((uint)local_14,1)) {
            uVar6 = thunk_FUN_00402874(uVar6);
          }
          if (0xffff < uVar6) {
            uVar6 = thunk_FUN_00402874(uVar6);
          }
          local_14 = (ushort)uVar6;
        }
      }
      else {
        uVar6 = local_14 + 1;
        if (SCARRY4((uint)local_14,1)) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        if (0xffff < uVar6) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        local_14 = (ushort)uVar6;
      }
      FUN_0050b084(local_14,local_12,local_10);
      FUN_0050b3c0(local_8,extraout_EDX_00,puVar8,SUB84((double)in_ST1,0),
                   (int)((ulonglong)(double)in_ST1 >> 0x20));
      uVar7 = extraout_ECX_02;
    }
    else if (sVar1 == 0x26) {
      dVar2 = dVar2 - 1.0;
      FUN_0050b3c0(local_8,extraout_EDX,extraout_ECX,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20))
      ;
      uVar7 = extraout_ECX_00;
    }
    else if (sVar1 == 0x28) {
      dVar3 = dVar3 + 1.0;
      FUN_0050b3c0(local_8,extraout_EDX,extraout_ECX,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20))
      ;
      uVar7 = extraout_ECX_01;
    }
  }
  FUN_00500a6c(local_8,local_c,CONCAT31((int3)((uint)uVar7 >> 8),local_d));
  return;
}

