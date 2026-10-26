/*
 * FUN_00592710 at 00592710
 * undefined FUN_00592710(void)
 * Address ranges: 00592710-00592810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00592710(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643880;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0060ca3d(local_30);
  local_28 = (undefined1 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  uVar2 = FUN_0060d240(local_30);
  uVar2 = FUN_005ae390(local_1c,s_Start_run__s_006a6550,uVar2);
  local_4._0_1_ = 1;
  FUN_0040cc00(uVar2,0,0xffffffff);
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
  puVar3 = local_28;
  if (local_28 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005b1740(puVar3);
  FUN_005aff00(local_2c);
  FUN_00592820();
  if (local_28 != (undefined1 *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}

