/*
 * FUN_004f0630 at 004f0630
 * undefined FUN_004f0630(void)
 * Address ranges: 004f0630-004f07c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f0630(int param_1,undefined4 param_2,int param_3,float param_4,float param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float local_2c;
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634088;
  local_c = ExceptionList;
  local_2c = param_4;
  iVar8 = 0;
  ExceptionList = &local_c;
  do {
    iVar4 = *(int *)(param_3 + 4);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_3 + 8) - iVar4 >> 2;
    }
    if (iVar3 <= iVar8) {
      ExceptionList = local_c;
      return;
    }
    if (iVar8 < 0) {
LAB_004f069d:
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar11 = local_18;
        for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_00404190();
      }
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    else {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_3 + 8) - iVar4 >> 2;
      }
      if (iVar4 <= iVar8) goto LAB_004f069d;
    }
    piVar1 = *(int **)(*(int *)(param_3 + 4) + iVar8 * 4);
    fVar12 = (float10)(**(code **)(*piVar1 + 0x10))();
    if ((float10)param_5 < fVar12 + (float10)local_2c) {
      local_2c = param_4;
      (**(code **)(*piVar1 + 0x18))();
    }
    FUN_00449760(param_1 + 0x30);
    (**(code **)(*piVar1 + 8))(param_2);
    fVar12 = (float10)(**(code **)(*piVar1 + 0x10))();
    iVar8 = iVar8 + 1;
    local_2c = (float)(fVar12 + (float10)local_2c + (float10)*(float *)(param_1 + 0x40));
  } while( true );
}

