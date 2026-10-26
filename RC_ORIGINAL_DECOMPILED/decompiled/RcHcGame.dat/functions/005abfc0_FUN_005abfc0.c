/*
 * FUN_005abfc0 at 005abfc0
 * undefined FUN_005abfc0(void)
 * Address ranges: 005abfc0-005ac0ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005abfc0(undefined4 *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645c40;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 6) == '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 6) = 1;
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a8eb4,0xd);
    local_4 = 0;
    iVar2 = FUN_00516d70();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 != 0) {
      FUN_0060a613(param_1,param_2);
      uVar5 = FUN_0060b060();
      uVar5 = FUN_005ae390(local_1c,s_CDaviRC<_s>deletes_the_object__f_006a8e88,uVar5);
      local_4._0_1_ = 1;
      FUN_005aff00(uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)*param_1)(1);
    }
    local_4 = 0xffffffff;
    FUN_005ae770();
  }
  ExceptionList = local_c;
  return;
}

