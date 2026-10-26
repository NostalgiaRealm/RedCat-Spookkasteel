/*
 * FUN_004a8460 at 004a8460
 * undefined FUN_004a8460(void)
 * Address ranges: 004a8460-004a85a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004a8460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dc60;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0056f830(param_2,param_3);
  local_4 = 0;
  param_1[0xc1] = param_4;
  *param_1 = &PTR_FUN_0064e894;
  if (param_4 == 0) {
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_1c[0] = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Entity____0_0068f604,
                                  s_D__Work_RCHorror_AdamSource_Adam_00695da4,0x130,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_0049df30(1);
  *(undefined1 *)((int)param_1 + 0x2e7) = 1;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  if ((*(int *)(param_4 + 0x48) < 0) || (2 < *(int *)(param_4 + 0x48))) {
    *(undefined4 *)(param_4 + 0x48) = 0;
  }
  param_1[0xc2] = *(undefined4 *)(param_4 + 0x48);
  ExceptionList = pvStack_c;
  return param_1;
}

