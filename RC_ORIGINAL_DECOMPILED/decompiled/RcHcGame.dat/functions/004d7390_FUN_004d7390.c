/*
 * FUN_004d7390 at 004d7390
 * undefined FUN_004d7390(void)
 * Address ranges: 004d7390-004d770a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004d7390(undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  float10 fVar10;
  undefined1 local_81;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_64 [12];
  undefined1 local_58 [4];
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  int local_38 [2];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631bc0;
  local_c = ExceptionList;
  if ((*param_2 == 0.0) && (param_2[1] == 0.0)) {
    fVar1 = param_2[2];
    if ((fVar1 == 0.0) != 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)ExceptionList >> 0x10),
                                      (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 0.0) << 0xe) >> 8),1);
    }
  }
  ExceptionList = &local_c;
  FUN_005b3000();
  if (DAT_006b93c4 == -0x80000000) {
    DAT_006b93c4 = FUN_0060af10();
  }
  if (DAT_006b93c4 != 0) {
    FUN_00554210(param_1,s_a_Pos_006998c8);
    FUN_00554210(param_2,s_a_Dir_006998c0);
    FUN_00554210(&local_7c,s_newPos_006998b8);
  }
  FUN_005b2fe0();
  FUN_005b2f20();
  FUN_005b3020(0x3e4ccccd,local_64);
  cVar3 = FUN_00554ab0(param_1,local_64,1,local_38);
  if (cVar3 != '\0') {
    fVar10 = (float10)FUN_005b30a0();
    if ((float10)0.2 <= fVar10) {
      *param_3 = local_1c;
      param_3[1] = local_18;
      param_3[2] = local_14;
      *param_1 = local_2c;
      param_1[1] = local_28;
      param_1[2] = local_24;
      FUN_005b2fe0();
      if (DAT_006b93c4 == -0x80000000) {
        DAT_006b93c4 = FUN_0060af10();
      }
      if (DAT_006b93c4 != 0) {
        FUN_005afe30();
        FUN_00554210(&local_2c,s_impact_006998ac);
        FUN_005afe30(s_distance_to_plane_is__f_00699894,(double)local_20);
        FUN_00554210(param_3,s_normal_0069988c);
        FUN_00554210(param_2,s_remDir_00699884);
        FUN_005afe30(&DAT_00699880);
      }
      iVar9 = local_80;
      if ((local_38[0] != 0) && (iVar4 = FUN_004d0570(), iVar9 = local_80, iVar4 != 0)) {
        FUN_00503180();
      }
      if (local_30 != 0) {
        iVar4 = FUN_005525c0();
        if (iVar4 == 0) {
          FUN_00409810(&DAT_006b3f70,&local_81);
          local_4 = 1;
          pcVar5 = (code *)FUN_005a07f0(s_userData____0_00699770,
                                        s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a3,local_48);
          (*pcVar5)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        else {
          if (DAT_006b93c4 == -0x80000000) {
            DAT_006b93c4 = FUN_0060af10();
          }
          if (DAT_006b93c4 != 0) {
            puVar8 = &DAT_0064a3b4;
            if (*(undefined1 **)(iVar4 + 0x60) != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)(iVar4 + 0x60);
            }
            puVar6 = *(undefined1 **)(iVar9 + 0x60);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            uVar7 = FUN_005ae390(local_58,s__s_collides_with_actor__s_00699754,puVar6,puVar8);
            local_4 = 2;
            FUN_005aff00(uVar7);
            local_4 = 0xffffffff;
            if (local_54 != 0) {
              cVar2 = *(char *)(local_54 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0();
              }
              else {
                *(char *)(local_54 + -1) = cVar2 + -1;
              }
            }
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
          }
          FUN_00503180();
        }
      }
      goto LAB_004d74df;
    }
    cVar3 = '\0';
  }
  *param_1 = local_7c;
  param_1[1] = local_78;
  param_1[2] = local_74;
  FUN_005b3070();
LAB_004d74df:
  ExceptionList = local_c;
  return (uint)(cVar3 == '\0');
}

