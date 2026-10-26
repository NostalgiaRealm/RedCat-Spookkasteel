/*
 * FUN_0045a600 at 0045a600
 * undefined FUN_0045a600(void)
 * Address ranges: 0045a600-0045aa32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall
FUN_0045a600(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

{
  char cVar1;
  float *pfVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  unkbyte10 Var6;
  float *unaff_retaddr;
  undefined4 ****local_154;
  uint uStack_140;
  float ***local_13c;
  int iStack_138;
  undefined1 *local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_118 [12];
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined4 uStack_a4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  float **local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626e50;
  pvStack_c = ExceptionList;
  local_154 = &local_13c;
  uStack_140 = (uint)(uint3)uStack_140;
  ExceptionList = &pvStack_c;
  FUN_004042e0();
  local_134 = (undefined1 *)&local_154;
  local_4 = 0;
  local_154 = (undefined4 ****)local_13c;
  if (local_13c != (float ***)0x0) {
    local_13c[5] = (float **)((int)local_13c[5] + 1);
  }
  FUN_00565c30();
  local_e8 = 1;
  local_e7 = 1;
  local_e6 = 1;
  local_e5 = 0;
  local_e4 = 1;
  local_e3 = 0;
  local_e2 = 1;
  local_154 = (undefined4 ****)local_18;
  local_4 = CONCAT31(local_4._1_3_,1);
  pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
  fStack_130 = *pfVar2;
  afStack_118[1] = *(float *)(param_1 + 0x3bc);
  fStack_12c = pfVar2[1];
  fStack_128 = pfVar2[2];
  afStack_118[4] = afStack_118[1];
  FUN_005b2fe0(auStack_28);
  fVar5 = (float10)FUN_005b2fd0();
  local_13c = (float ***)(float)fVar5;
  iVar4 = 0;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  do {
    if ((char)((uint)unaff_EBX >> 0x18) != '\0') {
      puStack_8._0_1_ = 10;
      FUN_00587d50(uStack_34,uStack_30);
      FUN_005fe5f0(uStack_34);
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      puStack_8._0_1_ = 9;
      FUN_00514430();
      puStack_8._0_1_ = 8;
      FUN_0057d310();
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_005ab4d0();
      if (uStack_140 != 0) {
        iVar4 = *(int *)(uStack_140 + 0x14) + -1;
        *(int *)(uStack_140 + 0x14) = iVar4;
joined_r0x0045aa0e:
        if (iVar4 == 0) {
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_005abfc0(0);
        }
      }
      ExceptionList = pvStack_10;
      return 0;
    }
    iStack_138 = iVar4 + 1;
    if (100 < iStack_138) {
      puStack_8._0_1_ = 4;
      FUN_00587d50(uStack_34,uStack_30);
      FUN_005fe5f0(uStack_34);
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      puStack_8._0_1_ = 3;
      FUN_00514430();
      puStack_8._0_1_ = 2;
      FUN_0057d310();
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_005ab4d0();
      if (uStack_140 == 0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = *(int *)(uStack_140 + 0x14) + -1;
      *(int *)(uStack_140 + 0x14) = iVar4;
      goto joined_r0x0045aa0e;
    }
    local_134 = (undefined1 *)((float)iStack_138 * *param_4 * 0.017453292);
    if (*param_2 <= (float)local_134) {
      unaff_EBX = 0x1000000;
    }
    fStack_124 = *unaff_retaddr;
    fVar5 = (float10)FUN_005b1630(fStack_124 + (float)local_134);
    fStack_120 = (float)fVar5;
    Var6 = FUN_005b1630(fStack_124 - (float)local_134);
    fVar5 = (float10)fcos((float10)fStack_120);
    local_e6 = 0;
    uStack_a4 = 0x3fe66666;
    iVar3 = 0;
    pfVar2 = afStack_118;
    afStack_118[0] = (float)(fVar5 * (float10)(float)local_13c + (float10)fStack_130);
    fVar5 = (float10)fsin((float10)fStack_120);
    afStack_118[2] = (float)((float10)fStack_128 - fVar5 * (float10)(float)local_13c);
    fVar5 = (float10)fcos(Var6);
    afStack_118[3] = (float)(fVar5 * (float10)(float)local_13c + (float10)fStack_130);
    fVar5 = (float10)fsin(Var6);
    afStack_118[5] = (float)((float10)fStack_128 - fVar5 * (float10)(float)local_13c);
    do {
      cVar1 = FUN_00565e10(&fStack_130,pfVar2);
      if (cVar1 == '\0') {
        *param_5 = afStack_118[iVar3 * 3];
        param_5[1] = afStack_118[iVar3 * 3 + 1];
        param_5[2] = afStack_118[iVar3 * 3 + 2];
        puStack_8._0_1_ = 7;
        FUN_00587d50(uStack_34,uStack_30);
        FUN_005fe5f0(uStack_34);
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        puStack_8._0_1_ = 6;
        FUN_00514430();
        puStack_8._0_1_ = 5;
        FUN_0057d310();
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_005ab4d0();
        puStack_8 = (undefined1 *)0xffffffff;
        if ((uStack_140 != 0) &&
           (iVar4 = *(int *)(uStack_140 + 0x14) + -1, *(int *)(uStack_140 + 0x14) = iVar4,
           iVar4 == 0)) {
          FUN_005abfc0(0);
        }
        ExceptionList = pvStack_10;
        return 1;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 3;
      iVar4 = iStack_138;
    } while (iVar3 < 2);
  } while( true );
}

