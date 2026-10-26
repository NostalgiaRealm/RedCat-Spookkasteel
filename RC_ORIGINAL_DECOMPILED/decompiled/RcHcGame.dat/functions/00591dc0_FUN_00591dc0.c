/*
 * FUN_00591dc0 at 00591dc0
 * undefined FUN_00591dc0(void)
 * Address ranges: 00591dc0-00591f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00591dc0(undefined1 *param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 *puStack_38;
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006437e2;
  local_c = ExceptionList;
  bVar6 = false;
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x19c) != 0) {
      ExceptionList = &local_c;
      if (*(int *)(param_1 + 0x18) != 0) {
        local_4 = 4;
        ExceptionList = &local_c;
        puStack_38 = param_1;
        FUN_004042e0(&puStack_38);
        local_4 = 0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x19c) + 8))();
      }
      if (*(undefined4 **)(param_1 + 0x19c) != (undefined4 *)0x0) {
        puStack_38 = (undefined1 *)0x591f61;
        (**(code **)**(undefined4 **)(param_1 + 0x19c))();
      }
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x19c) == 0) {
    puStack_38 = (undefined1 *)0x591e05;
    ExceptionList = &local_c;
    pvVar2 = operator_new(100);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      puStack_38 = (undefined1 *)0x591e28;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = s_SpriteParticleTexturedTrail_006a62d0;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar5 = (undefined1 *)(~uVar4 - 1);
      puStack_38 = puVar5;
      cVar1 = FUN_00401940();
      if (cVar1 != '\0') {
        pcVar7 = s_SpriteParticleTexturedTrail_006a62d0;
        for (uVar4 = (uint)puVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)local_18 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          local_18 = local_18 + 4;
        }
        for (uVar4 = (uint)puVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_18 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          local_18 = local_18 + 1;
        }
        puStack_38 = (undefined1 *)0x591e6c;
        FUN_00404190();
      }
      bVar6 = true;
      local_4 = CONCAT31(local_4._1_3_,1);
      puStack_38 = (undefined1 *)0x591e89;
      uVar3 = FUN_00586b40();
    }
    *(undefined4 *)(param_1 + 0x19c) = uVar3;
    local_4 = 0xffffffff;
    if (bVar6) {
      puStack_38 = (undefined1 *)0x591eaa;
      FUN_004040a0();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x58) = 300;
    *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x50) = 0x42000000;
    *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x54) = 100;
    if (*(int *)(param_1 + 0x18) != 0) {
      puStack_38 = &stack0xffffffcc;
      FUN_004042e0();
      local_4 = 3;
      FUN_00457240(0);
      local_4 = 0xffffffff;
      (**(code **)(**(int **)(param_1 + 0x19c) + 8))();
    }
  }
  ExceptionList = local_c;
  return;
}

