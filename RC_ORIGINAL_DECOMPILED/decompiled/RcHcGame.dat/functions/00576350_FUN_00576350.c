/*
 * FUN_00576350 at 00576350
 * undefined FUN_00576350(void)
 * Address ranges: 00576350-00576595
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00576467) */
/* WARNING: Removing unreachable block (ram,0x00576471) */
/* WARNING: Removing unreachable block (ram,0x0057647b) */
/* WARNING: Removing unreachable block (ram,0x00576475) */

void FUN_00576350(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_f0 [33];
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  char local_58;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006417ac;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_00565c30();
  local_4._0_1_ = 1;
  local_cf = 1;
  local_ce = 1;
  local_cd = 1;
  local_cc = 1;
  local_cb = 1;
  FUN_005b3000();
  FUN_005b3020(0x46fa0000);
  FUN_00565e10(local_f0);
  if (local_58 == '\0') {
    iVar2 = -1;
    pcVar3 = s_CAdamEffectBeam__FindEndpoint_____006a4b00;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CAdamEffectBeam__FindEndpoint_____006a4b00);
    local_4._0_1_ = 2;
    FUN_005035a0();
    FUN_005b3020(0x43a00000);
  }
  else {
    FUN_005b3050();
  }
  local_4._0_1_ = 5;
  FUN_00587d50(local_18);
  FUN_005fe5f0();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 4;
  FUN_00587d50(local_28);
  FUN_005fe5f0();
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4._0_1_ = 3;
  FUN_0057d310();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

