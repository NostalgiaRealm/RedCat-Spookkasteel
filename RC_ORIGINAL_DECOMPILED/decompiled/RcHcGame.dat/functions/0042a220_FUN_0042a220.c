/*
 * FUN_0042a220 at 0042a220
 * undefined FUN_0042a220(void)
 * Address ranges: 0042a220-0042a46d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0042a220(int *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined1 **ppuVar12;
  int *piStack_68;
  int local_48;
  undefined1 *local_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  char local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622fa8;
  local_c = ExceptionList;
  piStack_68 = &local_48;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_004237d0();
  iVar2 = *piVar5;
  if ((local_48 != 0) &&
     (iVar10 = *(int *)(local_48 + 0x14) + -1, *(int *)(local_48 + 0x14) = iVar10, iVar10 == 0)) {
    piStack_68 = (int *)0x0;
    FUN_005abfc0();
  }
  if (iVar2 != 0) {
    local_44 = (undefined1 *)&piStack_68;
    FUN_004237d0(&piStack_68);
    piVar5 = (int *)FUN_0040b060();
    if (piVar5 == (int *)0x0) {
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      piStack_68 = (int *)(~uVar9 - 1);
      local_24 = 0;
      local_20 = 0;
      local_1c[0] = 0;
      local_28[0] = iVar2 == 0;
      FUN_004040f0(&DAT_006b3f70);
      piStack_68 = (int *)local_28;
      local_4 = 0;
      pcVar6 = (code *)FUN_005a07f0(s_go____0_0068e514,s_D__Work_RCHorror_RCSource_RcShoo_0068ff1c,
                                    0x72);
      (*pcVar6)();
      local_4 = 0xffffffff;
      if (local_24 != 0) {
        piStack_68 = (int *)(local_24 + -1);
        cVar1 = *(char *)(local_24 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)piStack_68 = cVar1 + -1;
        }
      }
    }
    piStack_68 = (int *)local_28;
    puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x48))();
    uStack_38 = *puVar7;
    ppuVar12 = &local_44;
    fStack_34 = (float)puVar7[1] + (float)param_1[0x79];
    uStack_30 = puVar7[2];
    FUN_00429fe0(auStack_2c);
    FUN_005b2fe0(ppuVar12);
    FUN_005b2f20();
    fVar3 = (float)param_1[0x74];
    fVar4 = -fVar3;
    local_48 = FUN_0060a4a0();
    local_48 = local_48 % 10000;
    local_44 = (undefined1 *)((fVar3 - fVar4) * (float)local_48 * 0.0001 + fVar4 + (float)local_44);
    local_48 = FUN_0060a4a0();
    local_48 = local_48 % 10000;
    fStack_40 = (fVar3 - fVar4) * (float)local_48 * 0.0001 + fVar4 + fStack_40;
    local_48 = FUN_0060a4a0();
    local_48 = local_48 % 10000;
    fStack_3c = (fVar3 - fVar4) * (float)local_48 * 0.0001 + fVar4 + fStack_3c;
    FUN_005b2f20();
    iVar2 = *param_1;
    ppuVar12 = &local_44;
    uVar8 = FUN_00429fe0(local_1c);
    (**(code **)(iVar2 + 0xc4))(uVar8,ppuVar12);
    (**(code **)(*param_1 + 0xbc))(2);
  }
  ExceptionList = local_c;
  return;
}

