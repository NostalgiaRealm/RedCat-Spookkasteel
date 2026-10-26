/*
 * FUN_0040c520 at 0040c520
 * undefined FUN_0040c520(void)
 * Address ranges: 0040c520-0040c783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 35 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 35 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0040c520(int *param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (3.4028235e+38 <= param_4) {
    ExceptionList = &local_c;
    fVar8 = (float10)FUN_00424950();
    param_4 = (float)fVar8;
  }
  if (param_2 == 1) {
    iVar2 = FUN_0060a4a0();
    iVar2 = iVar2 % 3;
    if (iVar2 == 0) {
      local_1c[0] = param_4._0_1_;
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar5 = (char *)&DAT_0068e528;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        puVar6 = &DAT_0068e528;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_18 = *puVar6;
          puVar6 = puVar6 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar3);
      }
      local_4 = 0;
      (**(code **)(*param_1 + 0x9c))();
      FUN_004a0660(local_1c,param_3,param_4);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      if (iVar2 == 1) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0(0);
        uVar3 = 0xffffffff;
        pcVar5 = (char *)&DAT_0068e530;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        cVar1 = FUN_00401940(uVar3,1);
        if (cVar1 != '\0') {
          puVar6 = &DAT_0068e530;
          puVar7 = local_38;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(undefined1 *)((int)local_38 + uVar3) = 0;
          local_34 = uVar3;
        }
        local_4 = 1;
        (**(code **)(*param_1 + 0x9c))();
        FUN_004a0660(local_3c,param_3,param_4);
        if (local_38 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        pcVar5 = (char *)((int)local_38 + -1);
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *pcVar5 = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
      }
      else {
        if (iVar2 != 2) {
          ExceptionList = local_c;
          return;
        }
        uVar3 = 0xffffffff;
        pcVar5 = s_static_0068e538;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_2c[0] = param_4._0_1_;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        FUN_004040f0(s_static_0068e538,~uVar3 - 1);
        local_4 = 2;
        (**(code **)(*param_1 + 0x9c))();
        FUN_004a0660(local_2c,param_3,param_4);
        if (local_28 == 0) {
          ExceptionList = local_c;
          return;
        }
        pcVar5 = (char *)(local_28 + -1);
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *pcVar5 = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
      }
      FUN_005fe5f0(pcVar5);
    }
  }
  else {
    FUN_004233e0(param_2,param_3,param_4);
  }
  ExceptionList = local_c;
  return;
}

