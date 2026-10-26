/*
 * FUN_0042cf40 at 0042cf40
 * undefined FUN_0042cf40(void)
 * Address ranges: 0042cf40-0042d121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_0042cf40(int param_1,undefined4 param_2,float param_3,float param_4,float param_5,int *param_6)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 auStack_34 [12];
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623408;
  local_c = ExceptionList;
  fVar2 = ABS(param_4);
  param_4 = param_5 * 9.0 * param_5 * 9.0;
  ExceptionList = &local_c;
  *param_6 = 0;
  FUN_0042c620(local_28,param_2);
  piVar6 = (int *)**(int **)(param_1 + 0x30);
  if (piVar6 != *(int **)(param_1 + 0x30)) {
    do {
      if (piVar6[2] == 0) {
        local_28[0] = param_6._0_1_;
        uVar5 = 0xffffffff;
        local_24 = 0;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        local_20 = 0;
        local_1c = 0;
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 0;
        pcVar4 = (code *)FUN_005a07f0(s__i____0_0069002c,s_D__Work_RCHorror_RCSource_RCTarg_00690034
                                      ,0x181,local_28);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (local_24 != 0) {
          cVar3 = *(char *)(local_24 + -1);
          if ((cVar3 == '\0') || (cVar3 == -1)) {
            FUN_005fe5f0((char *)(local_24 + -1));
          }
          else {
            *(char *)(local_24 + -1) = cVar3 + -1;
          }
        }
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
      }
      piVar1 = (int *)piVar6[2];
      if ((char)piVar1[0x1f] != '\0') {
        (**(code **)(*piVar1 + 0x48))(auStack_18);
        FUN_005b2fe0(auStack_34);
        fVar8 = (float10)FUN_005b15f0(auStack_34);
        if (ABS((float10)param_3 - fVar8) <= (float10)fVar2 * (float10)0.5) {
          fVar8 = (float10)FUN_005b2fc0();
          if ((fVar8 < (float10)param_4) && (cVar3 = FUN_0042c8f0(param_2,piVar1), cVar3 != '\0')) {
            *param_6 = (int)piVar1;
            param_4 = (float)fVar8;
          }
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x30));
  }
  ExceptionList = local_c;
  return *param_6 != 0;
}

