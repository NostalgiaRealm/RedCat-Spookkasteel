/*
 * FUN_0042b620 at 0042b620
 * undefined FUN_0042b620(void)
 * Address ranges: 0042b620-0042b871
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0042b620(int *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  float *pfStack_68;
  float local_48;
  undefined1 *local_44;
  float fStack_40;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  char local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006231b8;
  local_c = ExceptionList;
  pfStack_68 = &local_48;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_004237d0();
  iVar7 = *piVar4;
  if ((local_48 != 0.0) &&
     (iVar10 = *(int *)((int)local_48 + 0x14) + -1, *(int *)((int)local_48 + 0x14) = iVar10,
     iVar10 == 0)) {
    pfStack_68 = (float *)0x0;
    FUN_005abfc0();
  }
  if (iVar7 != 0) {
    local_44 = (undefined1 *)&pfStack_68;
    FUN_004237d0(&pfStack_68);
    piVar4 = (int *)FUN_0040b060();
    if (piVar4 == (int *)0x0) {
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pfStack_68 = (float *)(~uVar9 - 1);
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_28[0] = iVar7 == 0;
      FUN_004040f0(&DAT_006b3f70);
      pfStack_68 = (float *)local_28;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_go____0_0068e514,s_D__Work_RCHorror_RCSource_RcStan_0068ffc4,
                                    99);
      (*pcVar5)();
      local_4 = 0xffffffff;
      if (local_24 != 0) {
        pfStack_68 = (float *)(local_24 + -1);
        cVar1 = *(char *)(local_24 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)pfStack_68 = cVar1 + -1;
        }
      }
    }
    pfStack_68 = (float *)local_28;
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x48))();
    uStack_38 = *puVar6;
    uStack_30 = puVar6[2];
    fStack_34 = (float)puVar6[1] + (float)param_1[0x8b];
    puVar12 = auStack_2c;
    (**(code **)(*param_1 + 200))(puVar12,&local_44);
    FUN_005b2fe0(puVar12);
    FUN_005b2f20();
    fVar2 = (float)param_1[0x86];
    fVar3 = -fVar2;
    iVar7 = FUN_0060a4a0();
    local_48 = (fVar2 - fVar3) * (float)(iVar7 % 10000) * 0.0001 + fVar3 + local_48;
    iVar7 = FUN_0060a4a0();
    local_44 = (undefined1 *)
               ((fVar2 - fVar3) * (float)(iVar7 % 10000) * 0.0001 + fVar3 + (float)local_44);
    iVar7 = FUN_0060a4a0();
    fStack_40 = (fVar2 - fVar3) * (float)(iVar7 % 10000) * 0.0001 + fVar3 + fStack_40;
    FUN_005b2f20();
    iVar7 = *param_1;
    uVar8 = (**(code **)(iVar7 + 200))(&local_20,&local_48);
    (**(code **)(iVar7 + 0xc4))(uVar8);
    (**(code **)(*param_1 + 0xbc))(2);
  }
  ExceptionList = local_c;
  return;
}

